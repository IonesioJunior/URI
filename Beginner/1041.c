#include <stdio.h>
#include <stdlib.h>

int main(int argc,char** argv){
	float x,y;
	scanf("%f %f",&x,&y);
	
	if(x == 0 && y != 0){
		printf("Eixo Y");
		printf("\n");
	}
	if(x != 0 && y == 0){
		printf("Eixo X");
		printf("\n");
	}
	if(x == 0 && y == 0){
		printf("Origem");
		printf("\n");
	}
	if(x > 0 && y > 0){
		printf("Q1");
		printf("\n");
	}
	if(x < 0 && y > 0){
		printf("Q2");	
		printf("\n");
	}
	if(x > 0 && y < 0){
		printf("Q4");
		printf("\n");
	}
	if(x < 0 && y < 0){
		printf("Q3");	
		printf("\n");	
	}
	return 0;	
}
