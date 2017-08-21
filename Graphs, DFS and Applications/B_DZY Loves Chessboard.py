n_m = input().split()
n, m = int(n_m[0]), int(n_m[1])

chessboard = []
for i in range(n):
    chessboard.append(list(input()))


def opposite_col(col):
    return "B" if col == "W" else "B"


def dfs(row, column, col):
    chessboard[row][column] = col
    print(chessboard)
    if column + 1 < m:
        if chessboard[row][column + 1] != "-":
            dfs(row, column + 1, opposite_col(col))
    if row + 1 < n:
        if chessboard[row + 1][column] != "-":
            dfs(row + 1, column, opposite_col(col))


for j in range(n):
    for k in range(m):
        if chessboard[j][k] == ".":
            dfs(j, k, "W")
