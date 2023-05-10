#!/usr/bin/env python3

"""
This diopter program is used to generate and reduce a csmith
that results in a disproportionate ratio between binary and source code
"""

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
from diopter.generator import CSmithGenerator
from diopter.reducer import Reducer, ReductionCallback
from diopter.sanitizer import Sanitizer


import sys
from subprocess import call
import re

from static_globals.instrumenter import annotate_with_static



def get_size(program: SourceProgram, setting: CompilationSetting) -> int:
    return setting.compile_program(
        program, ObjectCompilationOutput(None)
    ).output.text_size()

if __name__ == "__main__":
    Os = CompilationSetting(
        compiler=CompilerExe.get_system_gcc(),
        opt_level=OptLevel.Os,
        flags=("-march=native",),
    )
    sanOs = CompilationSetting(
        compiler=CompilerExe.get_system_clang(),
        opt_level=OptLevel.Os,
        flags=("-march=native",),
    )
    # expanded_warnings = Sanitizer.default_warnings +('Wunused-variable',) #We always get this warning =/
    # expanded_sanitizer = Sanitizer(debug=True, check_warnings_opt_level=OptLevel.Os, checked_warnings=expanded_warnings)
    sanitizer = Sanitizer(debug=True, check_warnings_opt_level=OptLevel.Os) #FIXME it seems that no "unused warning" is issued???
    while True:
        options_pool = helper.generate_csmith_flags()
        p = CSmithGenerator(sanitizer,include_path=os.environ['CSMITH_H_PATH'],options_pool=options_pool).generate_program()
        p = sanOs.preprocess_program(p, make_compiler_agnostic=True)
        #expanded_sanitizer.sanitize(p)
        if sanitizer.sanitize(p):
            break
    print(f"initial ratio: {helper.get_ratio(p, Os)}")
    # import pdb; pdb.set_trace()

    progr_saver = ProgressiveSaver(p.code, helper.get_ratio(p, Os), options_pool)

    for test_id in reduction_functions.get_test_functions():
        print(f"Starting reduction with {test_id}")
        # rprogram = Reducer().reduce(p, reduction_functions.ReduceObjectSize(sanitizer, Os, test_id))  # , debug=True)
        rprogram = Reducer().reduce(p, reduction_functions.ReduceObjectSize(sanitizer, Os, test_id, progr_saver)) # <- Use this if you want to save progress statistics (!slower) #TODO enable this as a flag --progress-trace
        assert rprogram

        if test_id == "test_6": # We save the generated program with static variables, since this is what we use as a metric in test_6
            rprogram = annotate_with_static(rprogram)

        output_code = helper.clang_formatter(rprogram.code)

        ratio = helper.get_ratio(rprogram, Os)
        print(f"Ratio obtained: {ratio}")
        progr_saver.save_test(test_id, output_code, ratio)