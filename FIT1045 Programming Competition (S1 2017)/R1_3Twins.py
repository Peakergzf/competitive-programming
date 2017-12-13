inputNumOfCoins = input()
inputCoins = input()

n = int(inputNumOfCoins)
coinsList = inputCoins.split()

for i in range(len(coinsList)):
    coinsList[i] = int(coinsList[i])

coinsList.sort()
i = 1
myCoins = coinsList[-i]
while myCoins <= sum(coinsList) - myCoins:
    myCoins += coinsList[-(i+1)]
    i += 1
minN = i

print(minN)
