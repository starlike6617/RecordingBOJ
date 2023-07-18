word = input()
cnt = 0
try :
    while True :
        s = input().split()
        for i in s :
            if word in i :
                cnt += 1
except :
    print(cnt)