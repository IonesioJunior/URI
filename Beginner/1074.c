#include <stdio.h>
#include <stdlib.h>

int main(int argc,char** argv){
	int val;
	scanf("%d",&val);
	while(val){
		int number;
		scanf("%d",&number);
		if(number == 0){
			printf("NULL\n");
		}else if(number > 0){
			if(number % 2 == 0){
				printf("EVEN POSITIVE\n");
			}else{
				printf("ODD POSITIVE\n");	
			}
		}else{
			if(number % 2 == 0){
				printf("EVEN NEGATIVE\n");
			}else{
				printf("ODD NEGATIVE\n");
			}
		}
		val--;
	}
	return 0;
}
