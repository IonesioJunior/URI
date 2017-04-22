#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv){
	int id,quantidade;
	scanf("%d %d",&id,&quantidade);
	if(id == 1){
		printf("Total: R$ %.2f",quantidade * 4.0);
		printf("\n");
	}else if(id == 2){
		printf("Total: R$ %.2f",quantidade * 4.5);
		printf("\n");
	}else if(id == 3){
		printf("Total: R$ %.2f",quantidade * 5.0);
		printf("\n");
	}else if(id == 4){
		printf("Total: R$ %.2f",quantidade * 2.0);
		printf("\n");
	}else{
		printf("Total: R$ %.2f",quantidade * 1.5);
		printf("\n");
	}
	return 0;
}
