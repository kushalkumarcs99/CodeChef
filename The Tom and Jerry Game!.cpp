T = int(input())
for i in xrange(T):
    n = int(input())
    k = n
    x = 0
    while (n%2 ==0):
        n = n //2
        x+=1
    x+=1
    i = pow(2,x)
    y = k //i
    print y
