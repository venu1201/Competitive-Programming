# health management system
#3 clients rohan harry hammad
# total 6 files
# write a function takes as input client name
# function
def getdate():
    import datetime
    return datetime.datetime.now()
# print(" choose log or retrive")
# x=int(input(" 1:log \n 2:retrive"))
def log():

        opt= int(input("1:sahil\n2:venu\n3:vedashree"))
        print("name choosed ",opt)
        if opt == 1:
            print(" choose food or excersize ")
            d= int(input("1:food,2:excersize"))
            if d==1:
                i = int(input("1: breakfast \n 2:lunch\n 3:dinner"))
                if i==1:
                    with open("sahilsoni.txt","a") as f:
                        data =input(" what did you eat in break fast")
                        f.write(str([str(getdate())]) +"  " + data+"breakfast" + "\n")
                        print("diet noted")
                elif i==2:
                    with open("sahilsoni.txt","a") as f:
                        data= input("what did you eat in lunch:")
                        f.write(str([str(getdate())])+"  "+ data + "lunch"+"\n")
                        print("diet noted")
                else:
                    with open("sahilsoni.txt","a") as f:
                        data = input("what did you eat in dinner:")
                        f.write(str([str(getdate())]) + "  " + data + "dinner" + "\n")
                        print("diet noted")
            else:
                i = int(input("1: pull ups \n 2:pushups\n 3:situps"))
                if i == 1:
                    with open("sahilsoni.txt", "a") as f:
                        data = input("how much time u did ")
                        f.write(str([str(getdate())]) + "  " + data + "pull ups" + "\n")
                        print("time noted ")
                elif i == 2:
                    with open("sahilsoni.txt", "a") as f:
                        data = input("how much time u did")
                        f.write(str([str(getdate())]) + "  " + data + "pushups" + "\n")
                        print("time noted ")
                else:
                    with open("sahilsoni.txt", "a") as f:
                        data = input("how much time u did")
                        f.write(str([str(getdate())]) + "  " + data +"  " +"situps" + "\n")
                        print("time noted")
        elif opt==2:
            print(" choose food or excersize ")
            d = int(input("1:food,2:excersize"))
            if d == 1:
                i = int(input("1: breakfast \n 2:lunch\n 3:dinner"))
                if i == 1:
                    with open("venu.txt", "a") as f:
                        data = input(" what did you eat in break fast")
                        f.write(str([str(getdate())]) + "  " + data + "breakfast" + "\n")
                        print("diet noted")
                elif i == 2:
                    with open("venu.txt", "a") as f:
                        data = input("what did you eat in lunch:")
                        f.write(str([str(getdate())]) + "  " + data + "lunch" + "\n")
                        print("diet noted")
                else:
                    with open("venu.txt", "a") as f:
                        data = input("what did you eat in dinner:")
                        f.write(str([str(getdate())]) + "  " + data + "dinner" + "\n")
                        print("diet noted")
            else:
                i = int(input("1: pull ups \n 2:pushups\n 3:situps"))
                if i == 1:
                    with open("venu.txt", "a") as f:
                        data = input("how much time u did ")
                        f.write(str([str(getdate())]) + "  " + data + "pull ups" + "\n")
                        print("time noted ")
                elif i == 2:
                    with open("venu.txt", "a") as f:
                        data = input("how much time u did")
                        f.write(str([str(getdate())]) + "  " + data + "pushups" + "\n")
                        print("time noted ")
                else:
                    with open("venu.txt", "a") as f:
                        data = input("how much time u did")
                        f.write(str([str(getdate())]) + "  " + data + "  " + "situps" + "\n")
                        print("time noted")
        else:
            print(" choose food or excersize ")
            d = int(input("1:food,2:excersize"))
            if d == 1:
                i = int(input("1: breakfast \n 2:lunch\n 3:dinner"))
                if i == 1:
                    with open("vedashree.txt", "a") as f:
                        data = input(" what did you eat in break fast")
                        f.write(str([str(getdate())]) + "  " + data + "breakfast" + "\n")
                        print("diet noted")
                elif i == 2:
                    with open("vedashree.txt", "a") as f:
                        data = input("what did you eat in lunch:")
                        f.write(str([str(getdate())]) + "  " + data + "lunch" + "\n")
                        print("diet noted")
                else:
                    with open("vedashree.txt", "a") as f:
                        data = input("what did you eat in dinner:")
                        f.write(str([str(getdate())]) + "  " + data + "dinner" + "\n")
                        print("diet noted")
            else:
                i = int(input("1: pull ups \n 2:pushups\n 3:situps"))
                if i == 1:
                    with open("vedashree.txt", "a") as f:
                        data = input("how much time u did ")
                        f.write(str([str(getdate())]) + "  " + data + "pull ups" + "\n")
                        print("time noted ")
                elif i == 2:
                    with open("vedashree.txt", "a") as f:
                        data = input("how much time u did")
                        f.write(str([str(getdate())]) + "  " + data + "pushups" + "\n")
                        print("time noted ")
                else:
                    with open("vedashree.txt", "a") as f:
                        data = input("how much time u did")
                        f.write(str([str(getdate())]) + "  " + data + "  " + "situps" + "\n")
                        print("time noted")
def retrive():
        opt = int(input("1:sahil\n2:venu\n3:vedashree"))
        print("name choosed ", opt)
        if opt == 1:
            print("what do u want to open for sahil")
            d = int(input("1:food,2:excersize"))
            if d==1:
                with open("sahilsoni.txt", "r") as f:
                    print(f.readlines())
                    print("Here is your Data")
            else:
                with open("sahilsoni.txt", "r") as f:
                    print(f.readlines())
                    print("Here is your Data")
        elif opt==2:
            print("what do u want to open for venu")
            d = int(input("1:food,2:excersize"))
            if d == 1:
                with open("venu.txt", "r") as f:
                    print(f.readlines())
                    print("Here is your Data")
            else:
                with open("venu.txt", "r") as f:
                    print(f.readlines())
                    print("Here is your Data")
        else:
            print("what do u want to open for vedashree")
            d = int(input("1:food,2:excersize"))
            if d == 1:
                with open("vedashree.txt", "r") as f:
                    print(f.readlines())
                    print("Here is your Data")
            else:
                with open("vedashree.txt", "r") as f:
                    print(f.readlines())
                    print("Here is your Data")
print("health managment system")
choose = int(input("what do u choose\n 1.log\n2.retrive"))
if choose==1:
    log()
else:
    retrive()