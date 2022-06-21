def fun(input1,input2,input3):
    sum=0
    for i in range(len(input3)):
        for j in range(i+1,input1):
            if(input3[i]==input3[j]):
                if(input2[i]>input2[j]):
                    input2[j]=0
                else:
                    input2[i]=0
    for i in input2:
        sum+=i
    return sum


input1=7
input2=[1,2,3,4,5,6,7]
input3=[1,1,2,2,3,2,3]
print(input1,input2,input3)
ans=fun(input1,input2,input3)
print(ans)
