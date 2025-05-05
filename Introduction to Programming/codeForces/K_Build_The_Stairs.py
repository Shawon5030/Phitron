n = int(input())
a = list(map(int, input().split()))
h_min = max(a[i] - i for i in range(n))
res = 0
for i in range(n):
    target = h_min + i
    if target > a[i]:
        res += target - a[i]
print(res)
