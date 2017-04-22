#include <stdio.h>
#include <stdlib.h>

int main(int argc,char** argv){
	float valor,imposto;
	scanf("%f",&valor);
	if(valor <= 2000){
		printf("Isento");
		printf("\n");
	}else{
		if(valor > 2000 && valor <= 3000){
			imposto = (valor - 2000) * 0.08;
		}else if(valor > 3000 && valor <= 4500){
			imposto = (1000 * 0.08) + (valor - 3000) * 0.18;
		}else if(valor > 4500){
			imposto = (1000 * 0.08) + (1500 * 0.18) + (valor - 4500) * 0.28;
		}
		printf("R$ %.2f",imposto);
		printf("\n");
	}
	return 0;
}
