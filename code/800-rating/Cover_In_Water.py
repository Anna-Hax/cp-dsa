def can_sort(n, arr):
    count = 0
    count_dot = 0
    #return arr
    for i in range(len(arr)): 
        if arr[i] == '.':
            count_dot +=1
        if arr[i] == '#' or i == (len(arr) - 1):
            if count_dot <= 2:
                count += count_dot
            else:
                count = 2
                break
            count_dot = 0
    return count

t = int(input())
results = []

for _ in range(t):
    n = int(input())
    arr = input()
    results.append(can_sort(n, arr))

for res in results:
    print(res)