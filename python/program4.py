def uniqueList(a):
	x=[]
	for b in a:
		if b not in x:
			x.append(b)

	return x

print uniqueList([1,2,1,3,2,3,3,2,4])