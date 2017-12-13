userInput = input()

userInputList = userInput.split()
for i in range(len(userInputList)):
    userInputList[i] = int(userInputList[i])

m, n, a = userInputList

if m % a == 0:
    i = m / a
else:
    i = (m // a) + 1
if n % a == 0:
    j = n / a
else:
    j = (n // a) + 1
result = str(int(i*j))
print(result)
