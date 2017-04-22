#include <stdio.h>
#include <stdlib.h>


int main(int argc,char** argv){
	int count = 0;
	float sum = 0;
	while(1){
		float nota;
		scanf("%f",&nota);
		if(nota < 0 || nota > 10){
			printf("nota invalida\n");
			continue;
		}else{
			sum = sum + nota;
			count = count + 1;
		}

		if(count == 2){
			break;
		}
	}
	printf("media = %.2f\n",sum / 2);
	return 0;
}
