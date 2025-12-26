#import random
def can_vanya_win(a, b, order):
    final = a
    for i in range(len(order)):
        if order[i] == 'D':
            final = final + b[i]
        elif order[i] == 'V':
            final = b[i] + final
            
    return final

t = int(input())
results = []

for _ in range(t):
    a_len = int(input())
    a = input()
    b_len = int(input())
    b = input()
    order = input()
    results.append(can_vanya_win(a, b, order))

for res in results:
    print(res)