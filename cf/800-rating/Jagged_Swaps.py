def can_sort(n, arr):
    min_in = min(arr)
    #max_in = max(arr)
    #if arr.index(min_in) + 1 > len(arr) // 2 or arr.index(max_in) + 1 <= len(arr) // 2:
    #    return "NO"
    #else:
    #    return "YES"

    if arr.index(min_in) == 0:
        return "YES"
    else:
        return "NO"
    
    

t = int(input())
results = []

for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    results.append(can_sort(n, arr))

for res in results:
    print(res)