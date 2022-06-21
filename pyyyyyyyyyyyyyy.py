cd,cm,cy=map(int,input("enter current date").split("/"))
bd,bm,by=map(int,input("enter birth date").split("/"))
age=cy-by
if(cm-bm==0):
    if(cd-bd>=0):
        age=age
    else:
        age=age-1
elif(cm-bm>0):
    age=age
else:
    age=age-1
print(age)
if(age>=30):
    print("elder")
elif(age>=15):
    print("younger")
else:
    print("kid")