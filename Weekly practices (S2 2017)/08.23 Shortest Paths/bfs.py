from queue import *

tree = [[1, 2, 3], [4, 5], [], [6, 7], [8, 9], [], [10, 11], [], [], [], [], []]
#           0        1      2   3         4     5    6        7  8   9  10   11

visited = [False] * len(tree)
distance = [-1] * len(tree)
q = Queue(maxsize=0)

distance[0] = 0
visited[0] = True
q.put(0)
# what's the difference between queue and python list - append/put & [0]/get ?

while not q.empty():
    t = q.get()  # python get is like c++ front & pop ?
    for u in tree[t]:
        if not visited[u]:
            distance[u] = distance[t] + 1
            visited[u] = True
            q.put(u)

print(visited)
print(distance)
# for i in list(q.queue):
#     print(i)
