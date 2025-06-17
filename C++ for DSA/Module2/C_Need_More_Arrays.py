t = int(input())  # test case সংখ্যা

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    
    count = 1  # অন্তত একটি সাব-অ্যারে থাকবে (প্রথম উপাদান দিয়ে শুরু)
    
    for i in range(1, n):
        if a[i] > a[i - 1] + 1:
            count += 1  # নতুন সাব-অ্যারে শুরু
    
    print(count)
