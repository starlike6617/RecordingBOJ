import sys

print = sys.stdout.write

for s in sys.stdin:
    s = s.rstrip()
    while "BUG" in s:
        s = s.replace("BUG", "")
    print(s + "\n")