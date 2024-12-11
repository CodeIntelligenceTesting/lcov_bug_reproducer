#!/bin/bash
set -euo pipefail
shopt -s inherit_errexit

rm -rf genlog

clang -o main -fcoverage-mapping -fprofile-instr-generate main.c lzo_init.c lzo_util.c  -I .

LLVM_PROFILE_FILE='main.profraw' ./main

/usr/bin/llvm-profdata merge -sparse -o main.profdata main.profraw

llvm-cov export -format=lcov -instr-profile=main.profdata main > main.lcov

genhtml main.lcov 2> genlog || true

grep -q 'genhtml: ERROR: (range) /home/robert/test/ltest/lzo_supp.h contains only' genlog
