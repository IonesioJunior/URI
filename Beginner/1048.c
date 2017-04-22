#include <stdio.h>
#include <stdlib.h>

int main(int argc,char** argv){
	float salario,reajuste;
	int percentual = 0;
	scanf("%f",&salario);
	
	if(salario <= 400){
		reajuste = salario * 0.15;
		salario = salario + reajuste;
		percentual = 15;
	}else if(salario > 400 && salario <= 800){
		reajuste = salario * 0.12;
		salario = salario + reajuste;
		percentual = 12;
	}else if(salario > 800 && salario <= 1200){
		reajuste = salario * 0.1;
		salario = salario + reajuste;
		percentual = 10;
	}else if(salario > 1200 &&  salario <= 2000){
		reajuste = salario * 0.07;
		salario = salario + reajuste;
		percentual = 7;
	}else{
		reajuste = salario * 0.04;
		salario = salario + reajuste;
		percentual = 4;
	}
	
	printf("Novo salario: %.2f",salario);
	printf("\n");
	printf("Reajuste ganho: %.2f",reajuste);
	printf("\n");
	printf("Em percentual: %d %%",percentual);
	printf("\n");
	return 0;	
}
