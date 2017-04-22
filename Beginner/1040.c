#include <stdio.h>
#include <stdlib.h>

int main(int argc,char** argv){
	float nota1,nota2,nota3,nota4;
	scanf("%f %f %f %f",&nota1,&nota2,&nota3,&nota4);
	
	float media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 4) + (nota4 * 1)) / 10;
	printf("Media: %.1f",media);
	printf("\n");
	if(media >= 7){
		printf("Aluno aprovado.");
		printf("\n");
	}else if(media >= 5 && media <=6.9){
		printf("Aluno em exame.");
		printf("\n");
		float exame;
		scanf("%f",&exame);
		printf("Nota do exame: %.1f",exame);
		printf("\n");
		float novaNota = (media + exame) / 2;
		if(novaNota >= 5){
			printf("Aluno aprovado.");
			printf("\n");
			printf("Media final: %.1f",novaNota);
			printf("\n");
		}else{
			printf("Aluno reprovado.");
			printf("\n");
		}
	}else{
		printf("Aluno reprovado.");
		printf("\n");
	}
	return 0;
}
