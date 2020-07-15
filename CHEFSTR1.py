for i in range(int(input())):
    n = int(input())
    a = list(map(int,input().split()))
    cnt = 0
    for i in range(0,n-1):
        for j in range(i+1,i+2):
            cnt += (abs(a[i]-a[j])-1)
    print(cnt)
