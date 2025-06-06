val = int(input())

lc_num = [4,7]

i=8
while i!=1000:
    
    val1 = str(i)
    if all(i in ['4','7'] for i in val1) :
        lc_num.append(int(i))
   
    i+=1


flag =0
for i in lc_num:
    
    if val%i==0:
        flag=1
        break
  
        
if flag==1:
    print("YES")
else:
    print("NO")
