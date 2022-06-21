n=int(input())
arr=[]
i=1
j=1
while(i<=n):
    a=[]
    j=1
    while(j<=n):
        a.append(i*j)
        j=j+1
    arr.append(a)
    i=i+1
print(*arr, sep = "\n")

