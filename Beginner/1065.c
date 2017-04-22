#include <stdio.h>
#include <stdlib.h>

int main(int argc,char** argv){
	int value;
	int count = 0;
	for(int i = 0 ; i  < 5;i++){
		scanf("%d",&value);
		if(value % 2 == 0){
			count = count + 1;
		}
	}
	printf("%d valores pares",count);
	printf("\n");
	return 0; 	
}
