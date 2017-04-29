#include <stdio.h>
#include <stdlib.h>


int main(int argc,char** argv){
	int number;
	scanf("%d",&number);
	int first = 0;
	int second = 1;
	int acc = 0;
	int index = 0;
	while(index < number){
		if(index == 0){
			printf("%d ",first);
		}else if(index == 1){
			printf("%d ",second);
			acc = 1;
		}else if(index == number - 1){
			printf("%d\n",acc);
		}else{
			printf("%d ",acc);
			first = second;
			second = acc;
			acc = first + second;
		}
		index++;
	}
	return 0;
}
