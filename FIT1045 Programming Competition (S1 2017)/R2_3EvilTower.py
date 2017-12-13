T = int(input())
for case_counter in range(T):
    input_tower = input()
    input_tower_list = input_tower.split()
    tower_list = []
    for i in input_tower_list:
        i = int(i)
        tower_list.append(i)
    h = tower_list[0]
    w = tower_list[1]
    d = tower_list[2]

    stone = 1

    if h <= w:
        stone = h
    else:
        last_move = (h - 1) % (w - 1)
        if ((h - 1) // (w - 1)) % 2 == 0:
            stone = 1 + last_move
        else:
            stone = w - last_move

    if stone == d:
        kill = 'Yes'
    else:
        kill = 'No'
    print(kill)
