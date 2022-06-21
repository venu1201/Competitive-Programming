d,m,y=map(int,input().split('/'))
if((y%400==0 ) or (y%4==0 and y%100!=0)):
    lp=1
else:
    lp=0
if(m==2 and lp==1 and d>=1 and d<=29):
    res="valid date"
elif(m==2 and lp==0 and d>=1 and d<=28):
    res="valid date"
elif((m==1 or m==3 or m==5 or m==7 or m==8 or m==10 or m==12) and (d>=1 and d<=31 )):
    res="valid date"
elif((m==4 or m==6 or m==9 or m==11) and (d>=1 and d<=30)):
    res="valid date"
else:
    res="invalid date"
if(res=="valid date"):
    if(m==2 and lp==1 and d==29):
        m=m+1
        d=1
        print(d,"/",m,"/",y)
    elif(m==2 and lp==0 and d==28):
        m=m+1
        d=1
        print(d,"/",m,"/",y)
    elif(m==12 and d==31):
        y=y+1
        d=1
        m=1
        print(d,"/",m,"/",y)
    elif((m==1 or m==3 or m==5 or m==7 or m==8 or m==10 ) and d==31):
        d=1
        m=m+1
        print(d,"/",m,"/",y)
    elif((m==4 or m==6 or m==9 or m==11) and d==30):
        d=1
        m=m+1
        print(d,"/",m,"/",y)
    elif(d>=1 and d<=31):
        d=d+1
        print(d,"/",m,"/",y)
else:
    print(res)


        
        
    
        
    
