n, t = map(int, input().split())
k = list(map(int, input().split()))
left = 1
right = max(k) * t 

answer = right

while left <= right:
    mid = (left + right) // 2
    total = 0
    for ki in k:
        total += mid // ki
        if total >= t:  
            break
    if total >= t:
        answer = mid
        right = mid - 1
    else:
        left = mid + 1

print(answer)