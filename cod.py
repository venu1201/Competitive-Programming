s=input()
if(len(s)==0):
    print("Nothing to encode")
st=s.lower()
check=0
if(len(st)!=0):
    ans=""
    for i in st:
        if(ord(i)>=97 and ord(i)<=122):
            x=26-(ord(i)-97)          
            x=str(x)
            ans+=x
        else:
            ans+=i
if(ans==st):
    print("Number string")
else:
    print(ans)