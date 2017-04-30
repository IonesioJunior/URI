#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc,char** argv){
	int number;
	scanf("%d",&number);
	while(number > 0){
		int prime;
		scanf("%d",&prime);
		double half = prime / 2.0;
		int index = 2;
		int flag = 1;
		while(index <= half){
			if(prime %index == 0){
				flag = 0;	
				printf("%d nao eh primo\n",prime);
				break;
			}
			index++;
		}
		if(flag){
			printf("%d eh primo\n",prime);
		}
		number--;
	}
	return 0;
}
