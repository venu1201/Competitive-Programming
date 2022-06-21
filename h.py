a=list(map(int,input().split()))
b=list(map(int,input().split()))
print((set(a).difference(b)))
print((set(b).difference(a)))
