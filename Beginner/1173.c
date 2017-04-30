#include <stdio.h>
#include <stdlib.h>



int main(int argc,char** argv){
	int loop = 0;
	int number;
	scanf("%d",&number);
	while(loop < 10){
		printf("N[%d] = %d\n",loop,number);
		number = number * 2;
		loop++;
	}
	return 0;
}
