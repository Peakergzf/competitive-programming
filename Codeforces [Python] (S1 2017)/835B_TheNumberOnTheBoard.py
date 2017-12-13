def digit_list(i):
	return [int(j) for j in str(i)]

k = int(input())
n = int(input())

sum_n = sum(digit_list(n))

if sum_n >= k:
	print(0)
else:
	differ = k - sum_n
	n_list = digit_list(n)
	n_list.sort()
	total = 0
	for i in range(len(n_list)):
		total += (9 - n_list[i])
		if total >= differ:
			print(i + 1)
			break
		
		
		
	
	

		
