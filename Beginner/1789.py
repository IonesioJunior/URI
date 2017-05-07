#coding: utf-8


while(True):
	try:
		trash = int(raw_input())
		vel = map(int,raw_input().split())
		max_ = max(vel)
		if(max_ >= 20):
			print 3
		elif(max_ >=10):
			print 2
		else:
			print 1
	
	except EOFError:
		break
