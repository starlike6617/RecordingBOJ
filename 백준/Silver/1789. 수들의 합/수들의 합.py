import sys

S = int(sys.stdin.readline())
i = 1
while S > 0:
    S = S - (i + 1)
    i += 1
print(i - 1)