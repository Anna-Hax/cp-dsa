#import math
def can_vanya_win(k):
    n_str = ''
    count = 1
    while len(n_str) != k:
        n_str+=str(count)
        count += 1

    sum = 0
    #n = int(n_str)

    for i in n_str:
        sum += int(i)

    return sum


t = int(input())
results = []

for _ in range(t):
    k = int(input())
    #can_vanya_win(n)
    results.append(can_vanya_win(k))

for res in results:
    print(res)