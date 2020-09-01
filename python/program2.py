def checkNumber(num,high,low):
	if num in range(low,high+1):
			return True
	else:
		return False

high = int(input("Enter upper limit "))
low = int(input("Enter lower limit "))

num = int(input("Enter the number "))

print (checkNumber(num,high,low))