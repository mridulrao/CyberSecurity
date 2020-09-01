def fun(n):
    ans = {}	
     for integer in range(1,n+1):
		if (prime(integer)):
			ans[integer] = "Prime"
		else:
			ans[integer] = "Non Prime"


	print (ans)

def prime(num):
	if num > 1:
		for i in range(2,num):
            if(num % i) == 0:
                return False
            else: 
   	    	return True
     else: 
	return False


fun(7)


