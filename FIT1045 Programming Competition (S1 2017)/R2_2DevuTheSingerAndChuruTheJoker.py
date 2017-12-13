n_d = input()
nd_list = n_d.split()
n = int(nd_list[0])
d = int(nd_list[1])

input_song = input()
input_song_list = input_song.split()
song_list = []
for i in input_song_list:
    i = int(i)
    song_list.append(i)

song_sum = 0
for i in range(len(song_list)):
    song_sum += song_list[i]
song_sum += (n - 1)*10

if song_sum > d:
    max_joke = -1
else:
    max_joke = (n - 1)*2
    max_joke += (d - song_sum) // 5

print(max_joke)
