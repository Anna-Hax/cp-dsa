def can_sort(n, arr):
    dict_n = {}
    dict_n[arr[0]] = 0
    for i in arr:
        if i == arr[0]:
            dict_n[arr[0]] += 1
        elif i in list(dict_n.keys()):
            dict_n[i] += 1
        else:
            dict_n[i] = 1

    if len(dict_n)>2:
        return "No"
    elif len(dict_n) == 1:
        return "Yes"
    else:
        a = list(dict_n.values())[0] 
        b = list(dict_n.values())[1]
        #print(a, "  ", b)
        if (a - b) in [0, 1, -1]:
            return "Yes"
        else:
            return "No"
        

t = int(input())
results = []

for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    results.append(can_sort(n, arr))

for res in results:
    print(res)