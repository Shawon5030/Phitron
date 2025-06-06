a,b,c=map(int,input().split())

first =abs(a-b)+abs(a-c)
second =abs(b-a)+abs(b-c)
th =abs(c-a)+abs(c-b)

print(min(first,second,th))
