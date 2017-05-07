#coding: utf-8

def fib(n,val = 1,prev = 0):
	if n == 0:
		return prev;
	elif n == 1:
		return val;
	else:
		return fib(n-1,val + prev,val)

num = int(raw_input())
while(num > 0):
	n  = int(raw_input())
	print "Fib(%d) = %d" %(n,fib(n))
	num -= 1

