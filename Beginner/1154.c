#include <stdio.h>
#include <stdlib.h>



int main(int argc,char** argv){
	int number;
	int sum = 0;
	int count = 0;
	scanf("%d",&number);
	while(number >= 0){
		sum = sum + number;
		scanf("%d",&number);
		count++;
	}
	if(count != 0){
		float result = sum / (count * 1.0);
		printf("%.2f\n",result);
	}else{
		printf("%.2f",0.0);
	}
	
	return 0;
}
