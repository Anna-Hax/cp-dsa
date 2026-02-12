def solve():
    n=int(input())
    a,b=[],[]
    for i in range(n):
        m=int(input())
        x=sorted(list(map(int,input().split())))
        a.append(x)
        b.append(x[1])
    print(sorted(a)[0][0]+sum(b)-min(b))


for _ in range(int(input())):
    solve()