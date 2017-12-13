testCases = input()
for count0 in range(int(testCases)):
    numOfRectangle = input()

    rectangleList = []
    for count1 in range(int(numOfRectangle)):
        singleRectangleList = input().split()
        singleIntList = list(map(int, singleRectangleList))
        rectangleList.append(singleIntList)

    jList = []
    for countJ in range(int(numOfRectangle)):
        jList.append(rectangleList[countJ][1])
    maxJ = max(jList)

    areaList = []
    for i in range(0, maxJ):
        areaList.append(0)

    for rec in range(0, len(rectangleList)):
        for j in range(rectangleList[rec][0], rectangleList[rec][1]):
            if rectangleList[rec][2] > areaList[j]:
                areaList[j] = rectangleList[rec][2]

    result = sum(areaList)
    print(result)
