import sys
from collections import deque

def solve():
    m, n, k = map(int, sys.stdin.readline().split())
    mx = []
    q = deque()
    total = 0  
    cq = 0  
    
    for i in range(m):
        row = list(map(int, sys.stdin.readline().split()))
        mx.append(row)
        for j in range(n):
            if row[j] == 1:
                total += 1
            elif row[j] == 2:
                cq += 1
                q.append((i, j, 0))  # (row, col, day)
    
    if total == 0:
        print(1, 0)
        return
    
    directions = [(-1, 0), (1, 0), (0, -1), (0, 1)]
    day_new = {}  
    
    while q:
        x, y, day = q.popleft()
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < m and 0 <= ny < n and mx[nx][ny] == 1:
                mx[nx][ny] = 2
                cq += 1
                day_new[day + 1] = day_new.get(day + 1, 0) + 1
                q.append((nx, ny, day + 1))
    
    if cq != total + (cq - total):  
        print(0)
    else:
        if k in day_new:
            print(1, day_new[k])
        else:
            print(1, 0)

solve()