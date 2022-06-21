import textwrap
y=[]
h=65
for i in range(26):
    y.append(chr(h))
    h+=1
h=97
for i in range(26):
    y.append(chr(h))
    h+=1
h=48
for i in range(10):
    y.append(chr(h))
    h+=1
y.append('+')
y.append('/')
s=input()
check=0
for i in range(len(s)):
    cl=ord(s[i])
    
    if((cl>=65 and cl<=90) or (cl>=97 and cl<=122) or (cl>=48 and cl<=57) or (cl==43) or (cl==47)):
        continue
    else:
        
        check=-1
        print(-1)
        break
if(check==0):
    string=""
    for i in range(len(s)):
        a=ord(s[i])
        bnr = bin(a).replace('0b','')
        x = bnr[::-1]
        while len(x) < 8:
            x += '0'
        bnr = x[::-1]

        string+=bnr

    x=textwrap.wrap(string, 6)
    if(len(x[len(x)-1])!=6):
        for i in range(6-len(x[len(x)-1])):
            x[len(x)-1]+='0'
    ans=""
    for i in range(len(x)):
        xx=int(x[i],2)
        ans+=y[xx]
    print(ans)