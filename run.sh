#!/bin/bash
set -euo pipefail
shopt -s inherit_errexit

if [[ "$PWD" != ~/test/ltest ]]
then
  for file in lzo_init.c lzo_conf.h  lzoconf.h  lzodefs.h  lzo_func.h  lzo_supp.h main.c
    do
    if [[ "$SHRINKFILE" != "$file" ]]
    then
      cp ~/test/ltest/$file .
    fi
  done
fi

rm -f genlog

clang -o main -fcoverage-mapping -fprofile-instr-generate main.c lzo_init.c  -I .

LLVM_PROFILE_FILE='main.profraw' ./main

/usr/bin/llvm-profdata merge -sparse -o main.profdata main.profraw

llvm-cov export -format=lcov -instr-profile=main.profdata main > main.lcov

genhtml main.lcov 2> genlog || true

grep -q 'genhtml: ERROR: (range)' genlog
grep -q 'lzo_supp.h contains only' genlog
