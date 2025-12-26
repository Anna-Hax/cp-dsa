def can_vanya_win(n):
    n_str = str(n)
    count = 0
    l_num = []
    if len(n_str) == 1:
        return count, l_num
    else:
        for i in range(len(n_str)):
            num = n_str[:i+1]
            for j in range(1, len(n_str) - i):
                zeros = '0' * (j)

                big_num = int(str(num) + zeros)
                num = int(num)

                if num + big_num == n:
                    count += 1
                    l_num.append(num)

        return count, l_num

t = int(input())
results = []

for _ in range(t):
    n = int(input())
    count, numlist = can_vanya_win(n)
    results.extend([count, numlist])

# Fix: Print each result properly
for i in range(0, len(results), 2):
    count = results[i]
    numlist = results[i + 1]

    print(count)
    for num in numlist:
        print(num)
