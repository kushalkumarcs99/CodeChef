for i in range(int(input())):
    n,k = map(int,input().split())
    a = list(map(int,input().split()))
    t = sum(a)
    print(t%k)
