#include <stdio.h>
#include <stdlib.h>

int main(int argc,char** argv){
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(b > c && d > a && (c + d) > (a + b) && c > 0 && d > 0){
		printf("Valores aceitos");
		printf("\n");
	}else{
		printf("Valores nao aceitos");
		printf("\n");
	}
	return 0;
}
