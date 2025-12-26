#import random
def can_vanya_win(n):
    # DON'T KNOW WHY IT DOESN'T WORK
    #for turn in range(1, 11):  
    #    if turn % 2 == 1: 
    #        if (n + 1) % 3 == 0:
    #            n += 1
    #        elif (n - 1) % 3 == 0:
    #            n -= 1
    #        else:
    #            num = random.choice([1, -1])
    #            n += num            
    #        if n % 3 == 0:
    #            return "First"
    #    else:  
    #        if (n + 1) % 3 != 0:
    #            n += 1
    #        elif (n - 1) % 3 != 0:
    #            n -= 1
    #        else:
    #            num = random.choice([1, -1])
    #            n += num
    #            
    #return "Second"
    if n%3 == 0:
        return "Second"
    if n%3 != 0:
        return "First"
t = int(input())
results = []

for _ in range(t):
    n = int(input())
   # arr = list(map(int, input().split()))
    results.append(can_vanya_win(n))

for res in results:
    print(res)