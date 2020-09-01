def fun(number):
	product = 1
	for x in number:
		product *= x

	return product 

print fun((1,2,3,4,5,6))