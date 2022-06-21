def hasVowels(strarr,query):
    arr=[0]
    v=['a','e','i','o','u']
    for i in range(len(strarr)):
        f=1
        for j in v:
            if(strarr[i][0]==j):
                for k in v:
                    if(strarr[i][len(strarr[i])-1]==k):
                        f=0
                        break
                if(f==0):
                    break
        if(f==0):
            arr.append(arr[len(arr)-1]+1)
        else:
            arr.append(arr[len(arr)-1])


    ans=[]
    for i in range(len(query)):
        l=int(query[i][0])
        r=int(query[i][2])
        ans.append(arr[r]-arr[l-1])
    return ans
n=int(input())
strarr=[]
for i in range(n):
    s=input()
    strarr.append(s)
q=int(input())
query=[]
for i in range(q):
    s=input()
    query.append(s)
ans=hasVowels(strarr,query)
for i in ans:
    print(i)