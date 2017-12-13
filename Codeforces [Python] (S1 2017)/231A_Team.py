n = int(input())
count = 0
for i in range(n):
    p = input()
    if int(p[0]) + int(p[2]) + int(p[4]) >= 2:
        count += 1
print(count)
