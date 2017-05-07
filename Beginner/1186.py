#coding: utf-8

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

result = [sum(mat[i][len(mat[0]) - i: 12]) for i in range(len(mat[0]))]

if(char ==  'S'):
        print '%.1f' % sum(result)
else:
        print "%.1f" % (sum(result) / 66.0)
