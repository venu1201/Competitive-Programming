prestr=input()
newstr=input()
newstr=newstr+'0'
for i in range(len(prestr)):
    if(prestr[i]!=newstr[i]):
        print(prestr[i])
        break