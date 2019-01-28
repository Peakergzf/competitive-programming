def interesting(n):
    s = str(n)
    cnt = [0 for _ in range(10)]
    for c in s:
        cnt[int(c)] += 1
    for i in cnt:
        if i > 1:
            return False
    return True


x = int(input())
x += 1

while not interesting(x):
    x += 1

print(x)
