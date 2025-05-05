n = int(input())
h = list(map(int, input().split()))
curr_charge = 0
min_cha = 0

for i in range(n-1):
    dif = h[i+1] - h[i]
    if dif>0:
         curr_charge-=dif
    else:
         curr_charge+=abs(dif)
    if curr_charge<min_cha:
        min_cha = curr_charge
print(abs(min_cha))