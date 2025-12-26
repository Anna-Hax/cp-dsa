def can_sort(n, k, s, t):
    s.sort()
    t.sort()

    for i in range(n):
        if s[i] % k != t[i] % k:
            return "NO"  

    for i in range(n):
        if s[i] > t[i]:
            return "NO"
    
    return "YES"  
                 
t = int(input())
results = []

for _ in range(t):
    
    n, k = map(int, input().split())
    s = list(map(int, input().split()))
    t = list(map(int, input().split()))
    results.append(can_sort(n, k, s, t))

for res in results:
    print(res)