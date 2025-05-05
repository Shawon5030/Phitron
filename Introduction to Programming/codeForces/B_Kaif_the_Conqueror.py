import sys
from collections import deque

def solve():
    m, n, k = map(int, sys.stdin.readline().split())
    gd = []
    q = deque()
    ta = 0  
    init_con = 0  
    
    for i in range(m):
        row = list(map(int, sys.stdin.readline().split()))
        gd.append(row)
        for j in range(n):
            if row[j] == 1:
                ta += 1
            elif row[j] == 2:
                init_con += 1
                q.append((i, j, 0))  
    
    if ta == 0:
        print(1, 0)
        return
    
    direction = [(-1, 0), (1, 0), (0, -1), (0, 1)]
    daily_c = {}  
    while q:
        x, y, day = q.popleft()
        for dx, dy in direction:
            nx, ny = x + dx, y + dy
            if 0 <= nx < m and 0 <= ny < n and gd[nx][ny] == 1:
                gd[nx][ny] = 2
                ta -= 1
                nx_day = day + 1
                daily_c[nx_day] = daily_c.get(nx_day, 0) + 1
                q.append((nx, ny, nx_day))
    
    
    if ta != 0:
        print(0)
    else:
        if k in daily_c:
            print(1, daily_c[k])
        else:
            print(1, 0)

solve()