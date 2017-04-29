#include <stdio.h>
#include <stdlib.h>


int main(int argc,char** argv){
	float value = 1.0;
	float sum = 0;
	int index = 1;
	while(index <= 100){
		sum = sum + (value / index);
		index++;
	}
	printf("%.2f\n",sum);
	return 0;
}
