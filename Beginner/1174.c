#include <stdio.h>
#include <stdlib.h>


int main(int argc,char** argv){
	int loop = 0;
	while(loop < 100){
		float value;
		scanf("%f",&value);
		if(value <= 10){
			printf("A[%d] = %.1f\n",loop,value);
		}
		loop++;
	}
	return 0;
}
