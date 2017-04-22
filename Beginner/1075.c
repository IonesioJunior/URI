#include <stdio.h>
#include <stdlib.h>

int main(int argc,char** argv){
	int value;
	scanf("%d",&value);
	for(int i = 1 ; i < 10000;i++){
		if(i % value == 2){
			printf("%d\n",i);
		}
	}
	return 0;
}
