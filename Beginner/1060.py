#coding: utf-8

count = 0

for i in range(6):
	if(float(raw_input()) >= 0):
		count = count + 1

print "%d valores positivos" % count
