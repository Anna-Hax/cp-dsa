def can_sort(a, b, n, numlist):
    numlist.sort()
    sec = 0
    while b>0:
        i = numlist[0]
        if b + i < a:
            b += i
            numlist.remove(i)

        elif b == 1 and len(numlist) != 0 and b + numlist[0] >= a:
            sec += a
            return sec
        else:
            b -= 1
            sec += 1
        
    return sec
    

t = int(input())
results = []

for _ in range(t):
    a, b, n = map(int, input().split())
    numlist = list(map(int, input().split()))
    results.append(can_sort(a, b, n, numlist))

for res in results:
    print(res)