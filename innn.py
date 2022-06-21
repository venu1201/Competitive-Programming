import math 
m=0
n=0
k=0
m=int(input())
v=[]
i=0
j=0
x=0
for i in range(m):
    s=list(map(int,input().split(",")))
    v.append(s)
k=int(input())    
print(v)
n=len(v[0])
s=[]
t=[]
for i in range(m):
      
    for j in range(n):
         
        if(i+k<=m and j+k<=n):
            
            sum=1
            
        for p in range(i,i+k):
            
            for c in range(j,j+k):
                print(p,c)
                sum=sum*v[p][c]
        print("..............")
              



            

          
    y=math.sqrt(sum)
    if(y*y==sum):
        s.append(sum)
    else:
        t.append(sum)

s.sort()
t.sort(reverse=True)
print(s)
print(t)









