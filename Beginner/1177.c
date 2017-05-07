#include <stdio.h>
#include <stdlib.h>


int main(int argc,char** argv){
	int loop = 0;
	int number;
	scanf("%d",&number);
	int current_value = 0;
	while(loop < 1000){
		printf("N[%d] = %d\n",loop,current_value);
		current_value++;
		if(current_value == number){
			current_value = 0;
		}	
		loop++;	
	}
	return 0;
}
