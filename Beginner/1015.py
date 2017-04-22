#coding: utf-8
from math import *

x1,y1 = map(float,raw_input().split())
x2,y2 = map(float,raw_input().split())


distancia = sqrt((x2 - x1)** 2 + (y2 - y1)** 2)

print "%.4f" % distancia
