#include <stdio.h>
#include <stdlib.h>

int main(int argc,char** argv){
	int distancia;
	scanf("%d",&distancia);
	float h = distancia / 30.0;
	h = h * 60;
	printf("%.f minutos", h);
	printf("\n");
	return 0;
}
