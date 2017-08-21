n_t = input().split()
n, t = int(n_t[0]), int(n_t[1])
a_list = input().split()
for i in range(len(a_list)):
    a_list[i] = int(a_list[i])

i = 1
while True:
    i += a_list[i - 1]
    if i == t:
        print('YES')
        break
    if i > n - 1:
        print('NO')
        break
