"""
mbed SDK
Copyright (c) 2011-2013 ARM Limited

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
"""
from argparse import ArgumentParser
from tools.toolchains import TOOLCHAINS
from tools.targets import TARGET_NAMES
from utils import argparse_force_uppercase_type, argparse_lowercase_hyphen_type, argparse_many

def get_default_options_parser(add_clean=True, add_options=True):
    parser = ArgumentParser()

    targetnames = TARGET_NAMES
    targetnames.sort()
    toolchainlist = list(TOOLCHAINS)
    toolchainlist.sort()

    parser.add_argument("-m", "--mcu",
                      help="build for the given MCU (%s)" % ', '.join(targetnames),
                      metavar="MCU",
                      type=argparse_many(argparse_force_uppercase_type(targetnames, "MCU")))

    parser.add_argument("-t", "--tool",
                      help="build using the given TOOLCHAIN (%s)" % ', '.join(toolchainlist),
                      metavar="TOOLCHAIN",
                      type=argparse_many(argparse_force_uppercase_type(toolchainlist, "toolchain")))

    if add_clean:
        parser.add_argument("-c", "--clean", action="store_true", default=False,
                      help="clean the build directory")

    if add_options:
        parser.add_argument("-o", "--options", action="append",
                          help='Add a build argument ("save-asm": save the asm generated by the compiler, "debug-info": generate debugging information, "analyze": run Goanna static code analyzer")',
                          type=argparse_lowercase_hyphen_type(['save-asm', 'debug-info', 'analyze'], "build option"))

    return parser
