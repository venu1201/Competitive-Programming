dep=float(input("enter train depature time"))
arr=float(input("enter arrival time"))
diff = dep-arr
diff=diff*-1
if(dep-arr)<15:
    print("right time")
else:
    print("wrong time")