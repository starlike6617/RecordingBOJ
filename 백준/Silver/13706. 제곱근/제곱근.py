N = int(input())

start = 1
end = N

while start <= end:
    mid = (start + end) // 2
    if (mid * mid) == N:
        print(mid)
        break
    elif (mid * mid) > N:
        end = mid - 1
    else:
        start = mid + 1
