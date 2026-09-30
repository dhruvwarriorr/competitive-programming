#!/usr/bin/env python3
"""Validate the repo's docs.

Checks:
  * every relative markdown link (in README.md and 0_theory/) points to a real file
  * every markdown file has balanced ``` fences and balanced $$ blocks
  * every .cpp has a theory note linking to it, and every theory note links a .cpp that exists
  * every .cpp is listed in the README code index

Exit code 1 if anything is wrong.
"""
import glob
import os
import re
import sys

ROOT = os.path.normpath(os.path.join(os.path.dirname(__file__), ".."))
os.chdir(ROOT)

errors = []
LINK = re.compile(r"\]\(([^)\s]+)\)")
FENCE = re.compile(r"```.*?```", re.S)

md_files = ["README.md"] + sorted(glob.glob("0_theory/**/*.md", recursive=True))
cpp_files = sorted(glob.glob("[0-9]_*/*.cpp"))

linked_cpp_from_theory = set()

for f in md_files:
    text = open(f, encoding="utf-8").read()
    if text.count("```") % 2:
        errors.append(f"{f}: unbalanced ``` fence")
    if FENCE.sub("", text).count("$$") % 2:
        errors.append(f"{f}: unbalanced $$ block")

    for target in LINK.findall(FENCE.sub("", text)):
        if re.match(r"[a-z]+:", target) or target.startswith("#"):
            continue
        path = target.split("#")[0]
        full = os.path.normpath(os.path.join(os.path.dirname(f), path))
        if not os.path.exists(full):
            errors.append(f"{f}: broken link -> {target}")
        elif f.startswith("0_theory") and full.endswith(".cpp"):
            linked_cpp_from_theory.add(full)

readme = open("README.md", encoding="utf-8").read()
for c in cpp_files:
    if c not in linked_cpp_from_theory:
        errors.append(f"{c}: no theory note links to it")
    if f"]({c})" not in readme:
        errors.append(f"{c}: missing from README code index")

if errors:
    print("\n".join(errors))
    print(f"\n{len(errors)} problem(s) found")
    sys.exit(1)
print(f"docs OK: {len(md_files)} markdown files, {len(cpp_files)} C++ files")
