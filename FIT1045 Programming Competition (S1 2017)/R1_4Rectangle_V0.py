import time

testCases = input()
for count0 in range(int(testCases)):
    numOfRectangle = input()
    rectangleList = []
    start_time = time.time()

    for count1 in range(int(numOfRectangle)):
        singleRectangleList = input().split()
        #     for count2 in range(len(singleRectangleList)):
        #         singleRectangleList[count2] = int(singleRectangleList[count2])
        #     rectangleList.append(singleRectangleList)
        singleIntList = list(map(int, singleRectangleList))
        rectangleList.append(singleIntList)

    totalAreaList = []
    areaList = []
    for rectangle in rectangleList:
        for k in range(0,rectangle[2]):
            for ij in range(rectangle[0],rectangle[1]):
                areaList.append(ij)
                areaList.append(k)
                if areaList not in totalAreaList:
                    totalAreaList.append(areaList)
                areaList = []

    totalArea = len(totalAreaList)
    print("--- %s seconds ---" % (time.time() - start_time))
    print(totalArea)
