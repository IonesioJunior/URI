#include <stdio.h>
#include <stdlib.h>

int main(int argc,char** argv){
	int n1,n2;
	int resultado;
	scanf("%d %d",&n1,&n2);
	if(n1 > n2){
		int x = 24 - n1;
		resultado = x + n2;
	}else if(n1 < n2){
		resultado = n2 - n1;
	}else{
		resultado = 24;
	}
	printf("O JOGO DUROU %d HORA(S)",resultado);
	printf("\n");
	return 0;
}
