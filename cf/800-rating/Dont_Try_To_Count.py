def can_sort(arr, x, s):
    count = -1
    for i in range(len(x)):
        #print(i)
        if x[i : i + arr[1]] == s:
            #count += 1
            if count == -1:
                count += 1
                return count
            else:
                return count + 1
        else:
            x += x
            count += 1
            #can_sort(arr, x, s)  
    return count



    
    
t = int(input())
results = []

for _ in range(t):
    arr = list(map(int, input().split()))
    x = input()
    s = input()
    results.append(can_sort(arr, x, s))

t = 0
while t < 1000:
    can_sort(arr, x, s)
    t+=1

for res in results:
    print(res)