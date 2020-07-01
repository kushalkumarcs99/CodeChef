for i in range(int(input())):
    n = int(input())
    a = list(map(int,input().split()))
    a.sort()
    t = a[::-1]
    MAXA = 1000000007
    ans = 0
    for i in range(n):
        if (t[i] - i >=0):
            ans = (ans%MAXA + (t[i] -i)%MAXA)%MAXA
    print(ans)
