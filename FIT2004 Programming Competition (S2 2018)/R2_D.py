import math
import heapq

G = []


def dijkstra(s):
    n = len(G)
    dist = [math.inf for _ in range(n)]
    pred = [0 for _ in range(n)]
    dist[s] = 0
    q = []
    heapq.heappush(q, (0, s))
    while True:
        try:
            du = heapq.heappop(q)
            d, u = du[0], du[1]
            if dist[u] <= d:
                for vw in G[u]:
                    v, w = vw[0], vw[1]
                    if dist[v] > dist[u] + w:
                        dist[v] = dist[u] + w
                        pred[v] = u
                        heapq.heappush(q, (dist[v], v))
        except IndexError:
            break

    return pred, dist


def init_graph():
    nm = list(map(int, input().split()))
    n, m = nm[0], nm[1]
    for _ in range(n + 1):
        G.append([])
    for i in range(m):
        uvw = list(map(int, input().split()))
        u, v, w = uvw[0], uvw[1], uvw[2]
        G[u].append((v, w))
        G[v].append((u, w))


def sol_prob():
    pred1, dist1 = dijkstra(1)
    pred2, dist2 = dijkstra(len(G)-1)
    ans = math.inf
    for i in range(len(G)):
        ans = min(ans, abs(dist1[i] - dist2[i]))
    print(ans)


def main():
    init_graph()
    sol_prob()


if __name__ == '__main__':
    main()
