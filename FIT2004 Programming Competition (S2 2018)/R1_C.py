def gcd(a, b):
    r = a % b
    while r != 0:
        a = b
        b = r
        r = a % b
    return b


T = int(input())

for _ in range(T):
    n = int(input())  # number of universities
    c = list(map(int, input().split()))  # number of contestants of each university

    k = c[0]  # the size of each team
    m = 1  # the minimum number of teams
    if n != 1:
        for i in range(len(c) - 1):
            k = gcd(k, c[i + 1])
        m = sum(c) // k

    print(k, m)
