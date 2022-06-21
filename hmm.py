even=[]
arr=[]
n=input()
n=int(n)
for i in range(n):
    x=input()
    x=int(x)
    arr.append(x)

odd=[]
epos=[]
opos=[]
narr=[0]*n
e=0
o=0
for i in range(n):
    if(arr[i]%2==1):
        odd.append(arr[i])
        opos.append(i)
        o=o+1
    if(arr[i]%2==0):
        even.append(arr[i])
        epos.append(i)
        e=e+1
even=sorted(even)

odd =sorted(odd)
j=0
while(o>0):
    narr[opos[j]]=odd[o-1]
    o=o-1
    j=j+1
for i in range(e):
    narr[epos[i]]=even[i]

print(narr)

