#coding: utf-8

line  = int(raw_input())
char = raw_input()
values = 144
mat = []
lista = []
while(values > 0):
	if(values % 12 == 0 and values != 144):
		mat.append(lista)
		lista = []
	number = float(raw_input())
	lista.append(number)
	values -= 1
mat.append(lista)

if(char ==  'S'):
	print '%.1f' %sum(mat[line])
else:
	print "%.1f" % (sum(mat[line]) / 12.0)
	 
