#!/bin/bash
set -euo pipefail
shopt -s inherit_errexit

if [[ "$PWD" != ~/test/ltest ]]
then
  cp ~/test/ltest/lzo_conf.h .
#  cp ~/test/ltest/lzoconf.h .
  cp ~/test/ltest/lzodefs.h .
  cp ~/test/ltest/lzo_dll.ch .
  cp ~/test/ltest/lzo_func.h .
  cp ~/test/ltest/lzo_init.c .
  cp ~/test/ltest/lzo_ptr.h .
  cp ~/test/ltest/lzo_supp.h .
  cp ~/test/ltest/lzo_util.c .
  cp ~/test/ltest/main.c .
fi

rm -f genlog

clang -o main -fcoverage-mapping -fprofile-instr-generate main.c lzo_init.c lzo_util.c  -I .

LLVM_PROFILE_FILE='main.profraw' ./main

/usr/bin/llvm-profdata merge -sparse -o main.profdata main.profraw

llvm-cov export -format=lcov -instr-profile=main.profdata main > main.lcov

genhtml main.lcov 2> genlog || true

grep -q 'genhtml: ERROR: (range)' genlog
grep -q 'lzo_supp.h contains only' genlog
