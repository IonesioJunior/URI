#include <stdio.h>
#include <stdlib.h>


int main(int argc,char** argv){
	int array[20];
	int loop = 0;
	while(loop < 20){
		int value;
		scanf("%d",&value);
		array[loop]  = value;
		loop++;
	}
	loop = 0;
	int secondPointer = 19;
	while(loop < 10){
		int aux = array[loop];
		array[loop] = array[secondPointer];
		array[secondPointer--] = aux;
		printf("N[%d] = %d\n",loop,array[loop]);
		loop++;
	}
	while(loop < 20){
		printf("N[%d] = %d\n",loop,array[loop]);
		loop++;
	}
	return 0;	
}
