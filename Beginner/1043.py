#coding: utf-8

entrada = map(float,raw_input().split());
a = entrada[0]
b = entrada[1]
c = entrada[2]

entrada.sort()
if(entrada[2] > abs(entrada[0] - entrada[1]) and entrada[2] < entrada[0] + entrada[1]):
	print "Perimetro = %.1f" % (entrada[0] + entrada[1] + entrada[2])
else:
	print "Area = %.1f" % (((a + b)* c)/ 2)
