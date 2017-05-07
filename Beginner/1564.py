#coding: utf-8


while(True):
	try:
		num = int(raw_input())
		if(num > 0):
			print "vai ter duas!"
		else:
			print "vai ter copa!"
	except EOFError:
		break
