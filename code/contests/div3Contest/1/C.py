import math
def can_vanya_win(n):
    a = n
    count = 0
    while a > 0:
        
        log = math.log(a, 3)
        whole = math.modf(log)[1]
        
       # print(a)
        
        a = a - 3**int(whole)
        count +=int(whole)
       # print(count)

    if count == 0:
        cost = int(3**(count+1) + count*(3**(count-1)))
    else:
        cost = (3**(count+1) + (count)*(3**(count-1))) + 3
    return cost


t = int(input())
results = []

for _ in range(t):
    n = int(input())
    #can_vanya_win(n)
    results.append(can_vanya_win(n))

for res in results:
    print(res)