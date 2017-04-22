#include <stdio.h>
#include <stdlib.h>

int main(int argc,char** argv){
	int ddd;
	scanf("%d",&ddd);
	if(ddd == 61){
		printf("Brasilia");
		printf("\n");
	}else if(ddd  == 71){
		printf("Salvador");
		printf("\n");
	}else if(ddd == 11){
		printf("Sao Paulo");
		printf("\n");
	}else if(ddd == 21){
		printf("Rio de Janeiro");
		printf("\n");
	}else if(ddd == 32){
		printf("Juiz de Fora");	
		printf("\n");
	}else if(ddd == 19){
		printf("Campinas");
		printf("\n");
	}else if(ddd == 27){
		printf("Vitoria");
		printf("\n");
	}else if(ddd == 31){
		printf("Belo Horizonte");
		printf("\n");
	}else{
		printf("DDD nao cadastrado");
		printf("\n");
	}
	return 0;	
}
