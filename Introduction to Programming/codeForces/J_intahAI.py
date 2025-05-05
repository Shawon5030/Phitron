import sys
input = sys.stdin.readline

def ai_distance(model, s):
    l1, l2 = len(model), len(s)
    min_len = min(l1, l2)
    replace = sum(1 for i in range(min_len) if model[i] != s[i])
    return replace + abs(l1 - l2)

class SegmentTree:
    def __init__(self, data):
        self.n = len(data)
        self.tree = [0] * (2 * self.n)
        self.build(data)
    
    def build(self, data):
        
        for i in range(self.n):
            self.tree[self.n + i] = data[i]
        for i in range(self.n - 1, 0, -1):
            self.tree[i] = max(self.tree[2 * i], self.tree[2 * i + 1])

    def update(self, idx, value):
        
        idx += self.n
        self.tree[idx] = value
        while idx > 1:
            idx //= 2
            self.tree[idx] = max(self.tree[2 * idx], self.tree[2 * idx + 1])

    def query(self, l, r):
       
        l += self.n
        r += self.n
        max_val = 0
        while l <= r:
            if l % 2 == 1:
                max_val = max(max_val, self.tree[l])
                l += 1
            if r % 2 == 0:
                max_val = max(max_val, self.tree[r])
                r -= 1
            l //= 2
            r //= 2
        return max_val

def main():
    model1, model2 = input().strip().split()
    parity1, parity2 = input().strip().split()

    p1 = 0 if parity1 == 'even' else 1
    p2 = 0 if parity2 == 'even' else 1

    n = int(input())
    context = [input().strip() for _ in range(n)]
    q = int(input())

    
    distances1 = [ai_distance(model1, context[i]) for i in range(n)]
    distances2 = [ai_distance(model2, context[i]) for i in range(n)]

  
    tree1 = SegmentTree([distances1[i] if distances1[i] % 2 == p1 else 0 for i in range(n)])
    tree2 = SegmentTree([distances2[i] if distances2[i] % 2 == p2 else 0 for i in range(n)])

    score1 = score2 = 0

    for _ in range(q):
        line = input().strip()
        if line.startswith("MODIFY"):
            _, i, s = line.split(maxsplit=2)
            i = int(i) - 1
            context[i] = s
            new_d1 = ai_distance(model1, s)
            new_d2 = ai_distance(model2, s)

            
            if new_d1 % 2 == p1:
                tree1.update(i, new_d1)
            else:
                tree1.update(i, 0)

            if new_d2 % 2 == p2:
                tree2.update(i, new_d2)
            else:
                tree2.update(i, 0)
        elif line.startswith("TEST"):
            _, l, r = line.split()
            l = int(l) - 1
            r = int(r) - 1

           
            max1 = tree1.query(l, r)
            max2 = tree2.query(l, r)

            score1 ^= max1
            score2 ^= max2

            if score1 > score2:
                print(f"ALICE {score1 - score2}")
            elif score2 > score1:
                print(f"BOB {score2 - score1}")
            else:
                print("Draw")

main()
