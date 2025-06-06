n = int(input())
lis = list(map(int,input().split()))

def update(lis,idx):
    for i in range(idx,len(lis)):
        if(i==len(lis)-1):
            lis[len(lis)-1]=0
        else:
            lis[i]=lis[i+1]
    return lis
        
    
             
    

for idx,val in enumerate(lis):
    if val==0:
        val = update(lis,idx) 
        print(val)

