s=input()
ans=""
l=len(s)
if(s[l-2]=='P'):    
    x=(int(s[0]))*10 + (int(s[1]))
   
    if(x==12):   
        a=int(x/10)
        b=int(x%10)    
        ans+=str(a)
        ans+=str(b) 
        
        
    else :
        x+=12
        a=int(x/10)
        b=int(x%10) 
        ans+=str(a)
        ans+=str(b)      
    
else :
    x=(int(s[0]))*10 + int(s[1])
    if(x==12):
        ans+="0"
        ans+="0"
        
        
    else:
        a=int(x/10)
        b=int(x%10) 
        ans+=str(a)
        ans+=str(b)      


ans+=s[2:len(s)-2]
print(ans)
