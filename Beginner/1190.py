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


result = []
limit = 11
count = 0
for i in range(1,len(mat) - 1,1):
        result.append(sum(mat[i][limit:12]))
        if limit == 7:
                count += 1
        if count == 2:
                limit += 1
        if limit > 7 and count < 2:
                limit -= 1

if(char ==  'S'):
        print '%.1f' % sum(result)
else:
        print "%.1f" % (sum(result) / 30.0)
