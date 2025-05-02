a = input()
a = int(a)+1 
a=str(a)
b = int(a)
for _ in range(int(a),9099):
 
    
    if len(set(str(b)))!=4:
        b+=1
      
    else:
        print(b)
        break