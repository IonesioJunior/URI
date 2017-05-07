#coding: utf-8

size = int(raw_input())
lista = map(int,raw_input().split())
print 'Menor valor: %d' % min(lista)
print 'Posicao: %d'  % lista.index(min(lista))
