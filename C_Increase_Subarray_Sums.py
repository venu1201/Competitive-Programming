import sys 
def fun(arr, x, y, mp):
    if y == len(arr): return mp
    elif x > y: return fun(arr, 0, y + 1, mp)
    else:
        s = sum(arr[x: y + 1])
        if y - x + 1 in mp.keys(): mp[y - x + 1] = max(s, mp[y - x + 1])
        else: mp[y - x + 1] = s
        return fun(arr, x + 1, y, mp)
for T in range(int(input())):
    n, x = map(int, input().split())
    arr = list(map(int, input().split()))
    if sum(arr) > 0:
        t = [(sum(arr) + i * x) for i in range(n+1)]
        print(*t)
        continue
    dic = fun(arr, 0, 0, {})
    mm = max(-sys.maxsize-1, max(dic.values()))
    ans = []
    ans.append(max(0, mm))
    mm = ans[0]
    for z in range(1, n+1):
        ans.append(max(mm, (dic[z] + z * x)))
        mm = max(mm, ans[z])
    print(*ans)