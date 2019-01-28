N = int(input())
T = list(map(int, input().split()))

T.sort()

ps = T[0]
ans = 1
for i in range(1, N):
    if T[i] >= ps:
        ans += 1
        ps += T[i]

print(ans)
