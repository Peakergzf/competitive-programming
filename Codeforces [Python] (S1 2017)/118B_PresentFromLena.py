n = int(input())

for i in range(n + 1):
    row = ''
    row += ' ' * (2 * (n - i))
    for j in range(i + 1):
        row += str(j) if i == 0 else str(j) + ' '
    for k in range(i - 1, -1, -1):
        row += str(k) if k == 0 else str(k) + ' '
    print(row)

for i in range(n - 1, -1, -1):
    row = ''
    row += ' ' * (2 * (n - i))
    for j in range(i + 1):
        row += str(j) if i == 0 else str(j) + ' '
    for k in range(i - 1, -1, -1):
        row += str(k) if k == 0 else str(k) + ' '
    print(row)
