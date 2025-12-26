def can_sort(knight, king, queen):
    count = 0
    x = knight[0]
    y = knight[1]
    arr_k = []
    arr_q = []

    arr_k.extend([[king[0]-x, king[1]-y], [king[0]-x, king[1]+y], [king[0]+x, king[1]+y], [king[0]+x, king[1]-y]])    
    arr_q.extend([[queen[0]-x, queen[1]-y], [queen[0]-x, queen[1]+y], [queen[0]+x, queen[1]+y], [queen[0]+x, queen[1]-y]])
    

    for i in arr_q:
        for j in arr_k:
            if i == j:
                count+=1
    if count != 0:
        return count
    else: 
        arr_k.extend([[king[0]-y, king[1]-x], [king[0]-y, king[1]+x], [king[0]+y, king[1]+x], [king[0]+y, king[1]-x]])
        arr_q.extend([[queen[0]-y, queen[1]-x], [queen[0]-y, queen[1]+x], [queen[0]+y, queen[1]+x], [queen[0]+y, queen[1]-x]])

        for i in arr_q:
            for j in arr_k:
                if i == j:
                    count+=1

        return count
    

t = int(input())
results = []

for _ in range(t):
    knight = list(map(int, input().split()))
    king = list(map(int, input().split()))
    queen = list(map(int, input().split()))
    results.append(can_sort(knight, king, queen))

for res in results:
    print(res)