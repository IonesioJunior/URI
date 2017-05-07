#coding: utf-8

n = float(raw_input())
loop = 0
while(loop < 100):
	print "N[%d] = %.4f" % (loop,n)
	n /= 2
	loop += 1
