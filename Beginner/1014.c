#include <stdio.h>
#include <stdlib.h>

int main(int argc,char** argv){
	int distancia;
	float combustivel;
	scanf("%d",&distancia);
	scanf("%f",&combustivel);
	float consumo = distancia / combustivel;
	
	printf("%.3f km/l", consumo);
	printf("\n");
	return 0;
}
