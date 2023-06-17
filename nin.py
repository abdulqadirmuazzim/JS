from pathlib import Path
import os
import subprocess as sub


way = Path(r"C:\Users\King_Abdul")

find = way.iterdir()
lis = []

for a in find:
    if a.is_dir():
        lis.append(a.stem)

try:
    for d, i in enumerate(lis):
        go = way / Path(i)
        print(d)
        for s in go.iterdir():
            print(s)
            continue
except PermissionError:
    print("not working")
