#coding: utf-8
from math import sqrt

while(True):
	numbers = map(int,raw_input().split())
	if(numbers[0] == 0):
		break
	else:
		print int(sqrt((numbers[0] * numbers[1]) / (numbers[2] / 100.0)))
