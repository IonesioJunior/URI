#include <stdio.h>
#include <stdlib.h>


int main(int argc,char** argv){
	int number;
	scanf("%d",&number);
	int divisor = 1;
	while(divisor <= number){
		if(number % divisor == 0){
			printf("%d\n",divisor);
		}
		divisor++;
	}
	return 0;
}
