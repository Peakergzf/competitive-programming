n_t = input().split()
n = int(n_t[0])
t = int(n_t[1])
s = list(input())

a = s[:]
for i in range(t):
    for j in range(len(s) - 1):
        if s[j] < s[j + 1]:
            a[j], a[j + 1] = a[j + 1], a[j]
    s = a[:]
print(''.join(a))
