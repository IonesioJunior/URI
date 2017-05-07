#coding: utf-8


dic = {'pedra':['papel','Spock'] , 'papel':['tesoura','lagarto'] , 'tesoura':['Spock','pedra'] , 'lagarto':['pedra','tesoura'] , 'Spock':['papel','lagarto']}


num = int(raw_input())
caso = 1
while(num > 0):
	lance = raw_input().split()
	if(lance[0] == lance[1]):
		print "Caso #%d: De novo!" % caso
	elif(lance[1] in dic[lance[0]]):
		print "Caso #%d: Raj trapaceou!" % caso
	else:
		print "Caso #%d: Bazinga!" % caso
	caso += 1
	num -= 1
