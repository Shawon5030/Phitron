
import math
T = int(input())
while T:
    m, n, d = map(int, input().split())
    m=m*m
    n=n*n
    dis = math.sqrt((m+n))
    
    if(d%dis==0):
        t = d/dis
        t=t*60
        print(t)
    else:
        t = d/dis
        t=t*60
    
    
        print(f"{t:.6f}")
    T-=1
    
