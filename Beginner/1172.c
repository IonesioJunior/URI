#include <stdio.h>
#include <stdlib.h>


int main(int argc,char** argv){
	int loop = 0;
	while(loop < 10 ){
		int value;
		scanf("%d",&value);
		if(value <= 0){
			printf("X[%d] = %d\n",loop,1);
		}else{
			printf("X[%d] = %d\n",loop,value);
		}
		loop++;
	}
	return 0;
}
