str=input()
arr=[]                                              #0 0 0 0 0 0 .. .. .. ..
str=str.lower()
for i in range(26):
    arr.append(0) 

for i in range(len(str)):
    if(ord(str[i])>=97 and ord(str[i])<=122):
        arr[ord(str[i])-97]=1

check=0
for i in range(26):
    if(arr[i]==0):
        check=1
        break


if(check==1):
    print("not pangram")
else:
    print("pangram")
