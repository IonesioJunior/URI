#include <stdio.h>
#include <stdlib.h>


int main(int argc,char** argv){
	int num;
	scanf("%d",&num);
	while(num > 1){
		printf("Ho ");
		num--;
	}
	if(num == 1){
		printf("Ho!\n");
	}

	return 0;
}
