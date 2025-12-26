#Halloumi_Boxes - TLE1

#ls = []
#def timepass(n, k, list1):
#    a = 0
#    if list1.sort() == list1:
#        a+=1
#    else:
#        for j in range(1, n+1):
#            for i in range(1, j+1):
#                if (k % (j-i+1)) == 0 and (j-i+1) != 1:
#                #ls.append("Yes")
#                    a += 1
#    
#    if a>0:
#        ls.append("YES")
#    else:
#        ls.append("NO")
#                 
#
#count = int(input())
#while (count>0):
#    inp = input()
#    inp2 = input()
#    inp = inp.split(" ")
#    inp2 = inp2.split(" ")
#    #inp2.sort()
#    n, k = int(inp[0]), int(inp[1])
#    timepass(n, k, inp2)
#    count -= 1
#
#for i in ls:
#    print(i)

def can_sort(n, k, arr):
    if k == 1:
        if arr == sorted(arr):
            return "YES"
        else:
            return "NO"
    else:
        return "YES"

t = int(input())
results = []

for _ in range(t):
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))
    results.append(can_sort(n, k, arr))

for res in results:
    print(res)

