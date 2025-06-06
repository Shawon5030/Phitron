n = int(input())
count=0
while(n):
    s = input()
    if(s=='Icosahedron'):
        count+=20
    elif (s=='Cube'):
       count+=6
    elif s=='Tetrahedron':
        count+=4
    elif s=='Octahedron':
        count+=8
    elif s=='Dodecahedron':
        count+=12
    n-=1
print(count)
    
