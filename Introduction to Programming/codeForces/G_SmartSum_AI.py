n = int(input())
coins = list(map(int, input().split()))
max_sum = sum(coins)
dp = 1  

for coin in coins:
    dp |= dp << coin

sums = []
for i in range(1, max_sum + 1):
    if dp & (1 << i):
        sums.append(i)

print(len(sums))
print(' '.join(map(str, sums)))