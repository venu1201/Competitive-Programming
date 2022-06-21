def fun(D,M):
	x=M*3
	x+=D
	if x%4==0:
		return int(x/4)
	return x/4
print(fun(5,1))