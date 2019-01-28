n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

p = [1 if i != 0 else 0 for i in range(n + 1)]

for j in range(1, len(a)):
    if p[a[j]] == 1:
        p[a[j]] = 0

for j in range(1, len(b)):
    if p[b[j]] == 1:
        p[b[j]] = 0

print("YES" if sum(p) == 0 else "NO")
