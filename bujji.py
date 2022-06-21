groom=input()
Gname,Gage,Gheight,Gqualifications,Gpackage,Gprofession=groom.split(" ")
bride=input()
Bname,Bage,Bheight,Bqualifications,Bpackage,Bprofession=bride.split(" ")
if(int(Gage)-int(Bage)>=0 and int(Gage)-int(Bage)<=5):
    i1=1
else:
    i1=0
if(Gqualifications=='M' or (Gqualifications==Bqualifications) or (Gqualifications=='D' and Bqualifications=='O')):
    i2=1
else:
    i2=0
if(float(Gheight)-float(Bheight)>=0 and float(Gheight)-float(Bheight)<=0.6):
    i3=1
else:
    i3=0
if(i1==1 and i2==1 and i3==1 and Gprofession=='J' and int(Gpackage)>=2*int(Bpackage)):
    print("selected")
elif(i1==1 and Gprofession=='B' and int(Gpackage)>=4*int(Bpackage)):
    print("selected")
elif(i1==1 and Gprofession=='O' and int(Gpackage)>=8*int(Bpackage)):
    print("selected")
else:
    print("not selected")
