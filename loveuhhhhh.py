s=input()
for i in range(len(s)):
    check=0
    for j in range(len(s)):
        if(i==j):
            continue
        a=s[i]
        b=s[j]
        
        if(ord(a)+1==ord(b)):
            print(s[i],"-",s[j])
            check=1
            break
    if(check==0):
        print(s[i],"-")



