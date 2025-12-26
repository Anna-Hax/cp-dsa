def can_sort(n, k, string):
    dict = {}
    oddcount = 0

    

    for i in string:
        if dict.get(i):
            dict[i] += 1
        else:
            dict[i] = 1

    for i in list(dict.values()):
        if i % 2 != 0:
            oddcount +=1

    if len(dict) == 1:
        return "Yes"
    elif k == 0:
        if oddcount == 1 or oddcount == 0:
            return "Yes"
        else:
            return "NO"
    else:
        if oddcount - k == 1 or oddcount - k  == 0:
            return "Yes"
        elif oddcount - k < 0:
            return "Yes"
        else:
            return "No"

    

t = int(input())
results = []

for _ in range(t):
    n, k = map(int, input().split())
    string = input()
    results.append(can_sort(n, k, string))

for res in results:
    print(res)