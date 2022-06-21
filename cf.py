item=list(map(str,input().split(',')))
dic={}
for i in range(len(item)):
    x=item[i][0]
    dic[x].append(item[i])  
for i in range(len(item)):
    x=item[i][0]
     
for i in range(len(item)):
    x=item[i][0]
    dic[x].sort()
for i in sorted (dic):
    print(i,end=" : ")
    for j in dic[i]:
        print(j,end=" ")
    print()