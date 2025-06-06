first = input()
sec = input()
thr = input()

full_str = sorted(first+sec)
thr = sorted(thr)

count =0
if len(full_str)!=len(thr):
    print("NO")
else:
    for i,j in zip(full_str,thr):
        if i!=j:
            print("NO")
            count=1
            break
    if(count==0):
        print("YES")