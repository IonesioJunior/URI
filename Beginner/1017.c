#include <stdlib.h>
#include <stdio.h>

int main(int argc,char** argv){
	int tempo,velocidade;
	scanf("%d",&tempo);
	scanf("%d",&velocidade);
	
	int distancia = tempo * velocidade;
	float combustivel = distancia / 12.0;
	printf("%.3f",combustivel);
	printf("\n");
	return 0;
}
