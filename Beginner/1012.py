#coding: utf-8

entrada = map(float,raw_input().split())

print "TRIANGULO: %.3f" % ((entrada[0] * entrada[2]) / 2)
print "CIRCULO: %.3f" % ((entrada[2]** 2) * 3.14159)
print "TRAPEZIO: %.3f" % (((entrada[0] + entrada[1]) * entrada[2]) / 2)
print "QUADRADO: %.3f" % (entrada[1] * entrada[1])
print "RETANGULO: %.3f" % (entrada[0] * entrada[1])
