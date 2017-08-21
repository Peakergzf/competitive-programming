n = int(input())
G = []
for i in range(n):
    G.append([])

roots = []
for i in range(n):
    manager = int(input())
    if manager == -1:
        roots.append(i + 1)
    else:
        G[manager - 1].append(i + 1)


def tree_height(u):
    if len(u) == 0:
        return 0
    else:
        max_depth = 0
        for i in u:
            if tree_height(G[i - 1]) > max_depth:
                max_depth = tree_height(G[i - 1])
        return max_depth + 1


heights = []
for i in roots:
    heights.append(tree_height(G[i - 1]))
print(max(heights) + 1)

