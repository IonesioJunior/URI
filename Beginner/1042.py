#coding: utf-8

entrada = map(int, raw_input().split());
copia = [];

for i in range(len(entrada)):
	copia.append(entrada[i]);

entrada.sort();
for i in range(len(entrada)):
	print entrada[i];
print ""
for i in range(len(copia)):
	print copia[i]

