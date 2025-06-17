import math

n = int(input())
for _ in range(n):
    val = int(input())
    sq = int(math.sqrt(val))
    
    if sq*sq==val:
        print("0",sq)
    else:
        print("-1")
       
