#include <stdio.h>
#include <stdlib.h>


int main(int argc,char** argv){
	int number;
	scanf("%d",&number);
	while(number > 0){
		int perfectNumber;
		scanf("%d",&perfectNumber);
		int index = 1;
		int sum = 0;
		while(index < perfectNumber){
			if(perfectNumber % index == 0){
				sum = sum + index;
			}
			index++;
		}
		if(sum == perfectNumber){
			printf("%d eh perfeito\n",perfectNumber);
		}else{
			printf("%d nao eh perfeito\n",perfectNumber);
		}
		number--;
	}

	return 0;
}
