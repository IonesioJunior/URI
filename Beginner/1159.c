#include <stdio.h>
#include <stdlib.h>


int main(int argc,char** argv){
	while(1){
		int number;
		scanf("%d",&number);
		if(number == 0){
			break;
		}
		if(number % 2 != 0){
			number++;
		}
		int sum = 0;
		int count = 0;
		while(count < 5){
			sum = sum + number;
			number = number + 2;
			count++;
		}
		printf("%d\n",sum);
	}
	return 0;
}
