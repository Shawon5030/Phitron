n,k = map(int,input().split())
nums = list(map(int , input().split()))

sum=0
while k:
    m = max(nums)
    if m>0:
        nums.remove(m)
        sum+=m
    k=k-1
print(sum)