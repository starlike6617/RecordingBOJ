P, K = map(int, input().split())
isGood = True

for i in range(2, K):
    if P % i == 0:
        isGood = False
        print("BAD", i)
        break

if isGood:
    print("GOOD")