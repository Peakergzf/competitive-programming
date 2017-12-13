inputNumOfColumn = input()
inputCubeInColumn = input()

n = inputNumOfColumn
cubeList = inputCubeInColumn.split()

for i in range(len(cubeList)):
    cubeList[i] = int(cubeList[i])
cubeList.sort()

outputString = ''
for i in cubeList:
    outputString += str(i) + ' '
outputString.strip()

print(outputString)
