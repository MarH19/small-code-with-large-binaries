#!/usr/bin/env python3

"""
This diopter program is used to generate and reduce a csmith
that results in a disproportionate ratio between binary and source code
"""

from argparse import ArgumentParser
import tempfile
import helper
import ast_parser
import reduction_functions
from saver import ProgressiveSaver
import saver
import logging
import os

from diopter.compiler import (
    CompilationSetting,
    CompilerExe,
    ObjectCompilationOutput,
    OptLevel,
    SourceProgram,
)
from diopter.compiler import Language
from diopter.generator import CSmithGenerator
from diopter.reducer import Reducer, ReductionCallback
from diopter.sanitizer import Sanitizer


import sys
from subprocess import call
import re

from static_globals.instrumenter import annotate_with_static
from logging_helper import logger



def get_size(program: SourceProgram, setting: CompilationSetting) -> int:
    return setting.compile_program(
        program, ObjectCompilationOutput(None)
    ).output.text_size()

clangOs = CompilationSetting(
        compiler=CompilerExe.get_system_clang(),
        opt_level=OptLevel.Os,
        flags=("-march=native",),
    )
Os = CompilationSetting(
        compiler=CompilerExe.get_system_gcc(),
        opt_level=OptLevel.Os,
        flags=("-march=native",),
    )


def generate_csmith(sanitizer: Sanitizer, options_pool):
    logger.info(f"csmith attempting generation using {options_pool}")
    generation_failure_limit = 500
    while True:
        p = CSmithGenerator(sanitizer,include_path=os.environ['CSMITH_H_PATH'],options_pool=options_pool).generate_program()
        p = clangOs.preprocess_program(p, make_compiler_agnostic=True)
        #expanded_sanitizer.sanitize(p)
        if sanitizer.sanitize(p):
            break

        # Sometimes the options_pool contains parameters which make the sanitizer always fail. If this is the case we want to stop the program
        generation_failure_limit -=1
        if generation_failure_limit == 0:
            logger.error(f"Failed generating code using following csmith parameters:\n{options_pool}")
            raise RecursionError
    return p


def perform_reduction(p: SourceProgram, progr_saver: ProgressiveSaver, trace_run: bool):
    print(f"initial ratio: {helper.get_ratio(p, Os)}")

    for test_id in reduction_functions.get_test_functions():
        logger.info(f"Starting reduction with {test_id}")
        if not trace_run:
            rprogram = Reducer().reduce(p, reduction_functions.ReduceObjectSize(sanitizer, Os, test_id))
        else:
            logger.info("Tracing program. This will increase runtime significantly!")
        try:
            rprogram = Reducer().reduce(p, reduction_functions.ReduceObjectSize(sanitizer, Os, test_id, progr_saver))
            assert rprogram
        except Exception as e:
            logger.error(f"Failed reduction on {test_id}")
            continue

        if test_id in ["test_6", "test_7", "test_8"]: # We save the generated program with static variables, since this is what we use as a metric in test_6
            rprogram = annotate_with_static(rprogram)

        output_code = helper.clang_formatter(rprogram.code)

        ratio = helper.get_ratio(rprogram, Os)
        print(f"Ratio obtained: {ratio}")
        progr_saver.save_test(test_id, output_code, ratio)




if __name__ == '__main__':
    parser = ArgumentParser()
    parser.add_argument("-f", "--file", dest="filename",
                        help="FILE from which to start reduction. Leave empty for csmith generation", metavar="FILE")
    parser.add_argument('-t', dest='trace_run', action='store_true', 
                        help='Trace the execution of the program by saving progress of reduction size as well as code snapshots at regular intervals')
    args = parser.parse_args()

    # expanded_warnings = Sanitizer.default_warnings +('Wunused-variable',) #We always get this warning =/
    # expanded_sanitizer = Sanitizer(debug=True, check_warnings_opt_level=OptLevel.Os, checked_warnings=expanded_warnings)
    sanitizer = Sanitizer(debug=True, check_warnings_opt_level=OptLevel.Os)

    if args.filename is not None:
        logger.info("Using input code for reductions")
        options_pool = None
        p = helper.file_to_SourceProgram(args.filename) 

    else:
        logger.info("Generating code with CSMITH")
        options_pool=helper.generate_csmith_flags()
        p = generate_csmith(sanitizer, options_pool)

    progr_saver = ProgressiveSaver(p.code, helper.get_ratio(p, Os), options_pool)

    perform_reduction(p, progr_saver, args.trace_run)