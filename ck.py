def fun(A,B):
	cnt=0
	x=A
	while(A<=B):
		cnt+=1
		A*=x
	d1=B-pow(x,cnt)
	d2=pow(x,cnt+1)-B
	if(d1>d2):
		return pow(x,cnt+1)
	else:
		return pow(x,cnt)
	

a=4
b=60
print(fun(a,b))

