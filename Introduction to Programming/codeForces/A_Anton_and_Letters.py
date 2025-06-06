data = (input())
lis =list(data)
if data=="{}":
    print("0")
else:

    for i in lis:
        if i==',' or i=='{' or i=='}' or i==' ':
            lis.remove(i)
    for i in lis:
        if i==' ':
            lis.remove(i)
    print(len(set(lis)))

    


        
        