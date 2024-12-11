#!/bin/bash
set -euo pipefail

clang -o main -fcoverage-mapping -fprofile-instr-generate main.c
LLVM_PROFILE_FILE='main.profraw' ./main
llvm-profdata merge -sparse -o main.profdata main.profraw
llvm-cov export -format=lcov -instr-profile=main.profdata main > main.lcov

genhtml main.lcov -o report
