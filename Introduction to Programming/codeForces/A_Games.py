n =int(input())

lis_a=[]
lis_b =[]
while(n):
    a,b=map(int,input().split())
    lis_a.append(a)
    lis_b.append(b)
    n-=1
count =0
for ind_a,a in enumerate(lis_a):
    for i_b,b in enumerate(lis_b):
        if a==b:
            count+=1
print(count)
    