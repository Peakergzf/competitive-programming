matrix_list = []
for i in range(5):
    row = input().split()
    for j in range(5):
        row[j] = int(row[j])
    matrix_list.append(row)

moves = 0
for i in range(5):
    for j in range(5):
        if matrix_list[i][j] == 1:
            moves = abs(i - 2) + abs(j - 2)
            break
print(moves)
