num = list(map(int, input().split()))
num.sort()

k = min((num[1] - num[0]), (num[2] - num[1]))

for i in range(1, 4):
    if (num[0] + i * k) not in num:
        print(num[0] + i * k)
