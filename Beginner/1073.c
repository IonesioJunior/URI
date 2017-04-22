#include <stdio.h>
#include <stdlib.h>

int main(int argc,char** argv){
	int value;
	scanf("%d",&value);
	for(int i = 1;i <= value;i++){
		if(i % 2 == 0){
			printf("%d^%d = %d\n",i,2,i * i);
		}
	}
	return 0;
}
