def solve(num):
    s = 0
    while num>0:
        
        d1 = num%10
        num = num//10
        s += d1
    return s
for i in range(int(input())):
    c =0
    m = 0
    for j in range(int(input())):
        a,b = map(int,input().split())
        a1 = solve(a)
        b1 = solve(b)
        if a1 == b1:
            c += 1
            m += 1
        elif a1 > b1:
            c+=1
        else:
            m += 1
    if c > m:
        print("0" , c)
    elif m > c:
        print("1", m)
    else:
        print("2", c)
            
