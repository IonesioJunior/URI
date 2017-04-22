#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc,char** argv){
	int count = 0;
	float sum = 0;
	while(1){
		float number;
		scanf("%f",&number);
		if(number < 0 || number > 10){
			printf("nota invalida\n");
			continue;
		}else{
			sum = sum + number;
			count++;
		}
		if(count == 2){
			printf("media = %.2f\n",sum / 2);
			int choice;
			while(choice != 1 && choice != 2){
				printf("novo calculo (1-sim 2-nao)\n");
				scanf("%d",&choice);
			}
			if(choice == 1){
				choice = INT_MIN;
				sum = 0;
				count = 0;
				continue;
			}else{
				break;
			}
		}
	}
	return 0;
}
