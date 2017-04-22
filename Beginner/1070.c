#include <stdio.h>
#include <stdlib.h>

int main(int argc,char** argv){
	int value;
	scanf("%d",&value);
	int limit = value + (2 * 6);
	for(int i = value;i < limit;i++){
		if(i % 2 != 0){
			printf("%d\n",i);
		}
	}
}
