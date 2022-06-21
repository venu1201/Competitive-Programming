def f(x):
    
    for i in range ( 0,int(len(x)/2) ,1):
        x[i],x[-(i+1)]=x[-(i+1)],x[i]
    return x
x=[1,2,3,4,5,6]
x=f(x)
print(x)