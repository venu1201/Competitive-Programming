def print(size):
    n=size
    m=(size*2-1)*2-1
    s=chr(96+n)
    x=[]
    c=1
    while(s!=chr(96)):
        x.append(s)
        s=chr(96+n-c)
        c+=1
    s=""
    c=0
    for i in range(int(((2*n)-1)/2)):     
        s=""
        for j in range(c+1):
            s+=x[j]
            s+="-"
        for j in range(c-1,-1,-1):
            s+=x[j]  
            s+="-"
        
        print(s.center(m,'-'))
        c+=1
    s=""
    for j in range(c+1):
        s+=x[j]
        s+="-"
    for j in range(c-1,-1,-1):
        s+=x[j]  
        if(j!=0):
            s+="-"
    print(s.center(m,'-'))
    for i in range(int(((2*n)-1)/2)):     
        s1=s[0:int(len(s)/2)]
        s2=s[int(len(s)/2)+4:len(s)]
        s=s1+s2
        
        print(s.center(m,'-'))
for i in range(1,27):
    print(i)
    print()
