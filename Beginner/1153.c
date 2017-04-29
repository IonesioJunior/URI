#include <stdio.h>
#include <stdlib.h>


int main(int argc,char** argv){
	int number;
	scanf("%d",&number);
	int fat = 1;
	int index = 1;
	while(index <= number){
		fat = fat * index;
		index++;
	}
	if(number != 0){
		printf("%d\n",fat);
	}else{
		printf("%d\n",0);
	}
	return 0;
}
