d,m,y=map(int,input().split('/'))
lp=0
if((y%400==0 ) or (y%4==0 and y%100!=0)):
    lp=1
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
    days=0
    febd=28
    if(lp==1):
        febd=29
    if(m==1):
        days=d
    elif(m==2):
        days=31+d
    elif(m==3):
        days=31+febd+d
    elif(m==4):
        days=31+febd+31+d
    elif(m==5):
        days=31+febd+31+30+d
    elif(m==6):
        days=31+febd+31+30+31+d
    elif(m==7):
        days=31+febd+31+30+31+30+d
    elif(m==8):
        days=31+febd+31+30+31+30+31+d
    elif(m==9):
        days=31+febd+31+30+31+30+31+31+d
    elif(m==10):
        days=31+febd+31+30+31+30+31+31+30+d
    elif(m==11):
        days=31+febd+31+30+31+30+31+31+30+31+d
    elif(m==12):
        days=31+febd+31+30+31+30+31+31+30+31+30+d
    days=days-2
    if(days<=0):
        print(0,"th week")
    else:
        week=int(days/7)
        check=days%7
        if(check==0):
            print(week,"th week")
        else:       
            print(week+1,"th week")
else:
    print(res)
    