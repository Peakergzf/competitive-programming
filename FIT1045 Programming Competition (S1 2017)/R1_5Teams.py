case = int(input())


def gcd(a, b):
    r = a % b
    while r != 0:
        a = b
        b = r
        r = a % b
    return b

for caseCount in range(case):
    n = int(input())
    inputUniList = input()
    uniList = inputUniList.split()
    for count0 in range(len(uniList)):
        uniList[count0] = int(uniList[count0])

    if n == 1:
        k = uniList[0]
        m = 1
    elif n == 2:
        k = gcd(uniList[0], uniList[1])
        m = int(int(sum(uniList)) / k)
    else:
        k = uniList[0]
        for i in range(0, len(uniList)-1):
            k = gcd(k, uniList[i+1])
        m = int(int(sum(uniList)) / k)

    print(k, m)
