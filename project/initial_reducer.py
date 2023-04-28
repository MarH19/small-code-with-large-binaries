#!/usr/bin/env python3

"""
This diopter program is used to generate and reduce a csmith
that results in a disproportionate ratio between binary and source code
"""

import tempfile
import helper
import ast_parser
import reduction_functions
import saver
import logging

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
    #Wunused-variable
    expanded_warnings = Sanitizer.default_warnings +('Wunused-variable',) #We always get this warning =/
    expanded_sanitizer = Sanitizer(debug=True, check_warnings_opt_level=OptLevel.Os, checked_warnings=expanded_warnings)
    sanitizer = Sanitizer(debug=True, check_warnings_opt_level=OptLevel.Os) #FIXME it seems that no "unused warning" is issued???
    while True:
        options_pool = helper.generate_csmith_flags()
        p = CSmithGenerator(sanitizer,include_path="/home/chris/.bin/csmith/build/include",options_pool=options_pool).generate_program()
        p = sanOs.preprocess_program(p, make_compiler_agnostic=True)
        expanded_sanitizer.sanitize(p)
        if reduction_functions.ratio_filter(p, Os, 0): # and (res := expanded_sanitizer.sanitize(p)):
            break
    print(f"initial ratio: {helper.get_ratio(p, Os)}")
    # import pdb; pdb.set_trace()
    reduced_code_samples = []
    reduced_code_sizes = []
    test_names = []

    for test_id in reduction_functions.get_test_functions():
        print(f"Starting reduction with {test_id}")
        rprogram = Reducer().reduce(p, reduction_functions.ReduceObjectSize(sanitizer, Os, test_id))  # , debug=True)
        assert rprogram

        output_code = helper.clang_formatter(rprogram.code)
        reduced_code_samples.append(output_code)
        test_names.append(test_id) #FIXME get the function name to be appended!!!!!

        ratio = helper.get_ratio(rprogram, Os)
        print(f"Ratio obtained: {ratio}")
        reduced_code_sizes.append(ratio)

    saver.save_output(p.code, ''.join(options_pool), reduced_code_samples, test_names, helper.get_ratio(p, Os), reduced_code_sizes)
