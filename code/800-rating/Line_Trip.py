def can_sort(n, k, arr):
    diff = []
    for i in range(len(arr)-1):
        diff.append(arr[i+1] - arr[i])
    diff.append(2*(x - arr[-1]))
    diff.append(arr[0])
    return max(diff)

t = int(input())
results = []

for _ in range(t):
    n, x = map(int, input().split())
    arr = list(map(int, input().split()))
    results.append(can_sort(n, x, arr))

for res in results:
    print(res)