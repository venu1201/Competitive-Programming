def fun(s):
    for i in range(len(s)):
        if(s[i]!=s[len(s)-i-1]):
            return 0
    return 1
str=input()
str = "".join(dict.fromkeys(str))
k=int(input())
n=1
j=0
s=""
s2=""
while(n!=k):
    for i in range(n):
        s+=str[j]
    while(len(s2)!=k):
        s2+=s
    
        

