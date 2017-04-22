#include <stdio.h>
#include <stdlib.h>

int main(int argc,char** argv){
	int valor,horas,minutos,segundos;
	scanf("%d",&valor);
	horas = valor / 3600;
	valor = valor % 3600;
	minutos = valor / 60;
	segundos = valor % 60;
	printf("%d:%d:%d",horas,minutos,segundos);
	printf("\n");
	return 0;
}
