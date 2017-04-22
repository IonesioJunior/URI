#coding: utf-8

entrada1 = map(float,raw_input().split())
entrada2 = map(float,raw_input().split())

preco = (entrada1[1] * entrada1[2]) + (entrada2[1] * entrada2[2])

print "VALOR A PAGAR: R$ %.2f" % preco
