G = [[1], [0, 2], [1, 3, 4], [2, 5], [2, 5], [3, 4]]

colour_list = []
for i in range(len(G)):
    colour_list.append(" ")


def opposite_col(col):
    return "black" if col == "white" else "white"


def dfs(u, col):
    colour_list[u] = col
    print(colour_list)
    for j in range(len(G[u])):
        if colour_list[G[u][j]] == " ":
            dfs(G[u][j], opposite_col(col))
        elif colour_list[G[u][j]] == col:
            break


dfs(0, "black")
