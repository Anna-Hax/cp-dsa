#def fun(n, listA, listB):
#    which = 0
#    
#    return which

def can_sort(n, listA, listB):
    count = 0
    if listA==listB:
        return 1
    else:
        while True:
            step1 = False
            for i in range(n):
                if listA[i] > listB[i]:
                    listA[i] -= 1
                    #print(listA)
                    step1 += 1
                    break

            if step1 is False:
                return count+1
                
            for i in range(n):
                if listA[i] < listB[i]:
                    listA[i] += 1
                    break
                
            
            count +=1

t = int(input())
results = []

for _ in range(t):
    n = int(input())
    listA = list(map(int, input().split()))
    listB = list(map(int, input().split()))
    results.append(can_sort(n, listA, listB))

for res in results:
    print(res)