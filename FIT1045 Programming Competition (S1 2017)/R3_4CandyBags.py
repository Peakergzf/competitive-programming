n = int(input())

row_list = []
for col_count in range(n):
    row_list.append(0)
table_list = []
for row_count in range(n):
    table_list.append(row_list[:])

num_list = []
for i in range(n):
    num_row_list = []
    for j in range(n):
        num_row_list.append(i * n + j + 1)
    num_list.append(num_row_list)

for i in range(n):
    k = i
    for j in range(n):
        table_list[i][j] = num_list[j][k]
        if i % 2 == 0:
            k += 1
            if k >= n:
                k = k % n
        else:
            k -= 1
            if k < 0:
                k = k % n

for i in table_list:
    print(' '.join(map(str, i)))
