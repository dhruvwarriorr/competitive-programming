#!/usr/bin/env bash
# Compile every C++ file and validate the docs.
#   ./scripts/check.sh            compile everything with -Wall -Wextra
#   CXX=clang++ ./scripts/check.sh
#   ./scripts/check.sh 6_graphs   only compile one topic folder
set -u
cd "$(dirname "$0")/.."

CXX="${CXX:-g++}"
FLAGS="-std=c++17 -O2 -Wall -Wextra -fsyntax-only"
scope="${1:-[0-9]_*}"

fail=0
count=0
for f in $scope/*.cpp; do
  [ -e "$f" ] || continue
  count=$((count + 1))
  if ! out=$($CXX $FLAGS "$f" 2>&1); then
    echo "FAIL  $f"
    echo "$out" | head -5
    fail=$((fail + 1))
  fi
done
echo "compiled $count files, $fail failed"

python3 scripts/lint_docs.py || fail=$((fail + 1))
exit $((fail > 0))
