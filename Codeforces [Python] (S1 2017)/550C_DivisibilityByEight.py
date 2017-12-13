input_n = input()

n = []

for count in range(len(input_n)):
    n.append(input_n[count])

found = False

if int(input_n) % 8 == 0:
    print('YES')
    print(input_n)
    found = True

if not found:
    for i in range(len(n)):
        if int(n[i]) % 8 == 0:
            print('YES')
            print(n[i])
            found = True
            break

if not found:
    for i in range(0, len(n)):
        if found:
            break
        for j in range(i + 1, len(n)):
            if int(n[i] + n[j]) % 8 == 0:
                print('YES')
                print(n[i] + n[j])
                found = True
                break

if not found:
    for i in range(0, len(n)):
        if found:
            break
        for j in range(i + 1, len(n)):
            if found:
                break
            for k in range(j + 1, len(n)):
                if int(n[i] + n[j] + n[k]) % 8 == 0:
                    print('YES')
                    print(n[i] + n[j] + n[k])
                    found = True
                    break

if not found:
    print('NO')
