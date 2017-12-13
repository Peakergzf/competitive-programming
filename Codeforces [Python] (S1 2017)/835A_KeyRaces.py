vvtt = input().split()
for i in range(5):
	vvtt[i] = int(vvtt[i])

s = vvtt[0]
v1 = vvtt[1]
v2 = vvtt[2]
t1 = vvtt[3]
t2 = vvtt[4]

first = v1 * s + 2 * t1
second = v2 * s + 2 * t2

if first > second:
	print("Second")
elif first < second:
	print("First")
else:
	print("Friendship")
