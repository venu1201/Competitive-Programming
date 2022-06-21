alice=list(map(int,input().split(" ")))
bob=list(map(int,input().split(" ")))
a=0
b=0
for i in range(0,3):
    if(alice[i]>bob[i]):
        a+=1
    elif(alice[i]<bob[i]):
        b+=1

print(a,b)

    

    
    

    

