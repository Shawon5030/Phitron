m= int(input())
while m:
    n = int(input())
    if n>=1 and n<=9:
        print("1")
        print(n)

    else:

        lis = []
        for i in str(n):
            lis.append(int(i))
    

        zero = ''
        result_lis = []
        for i in range(len(lis)-1,-1,-1):
            if int(str(lis[i])+zero)>0:
                result_lis.append(int(str(lis[i])+zero))
            zero+='0'
            
        print(len(result_lis))
        for i in result_lis:
            print(i,end=' ')
        print(end='\n')
    m-=1
    