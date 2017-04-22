#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc,char** argv){
	int max = INT_MIN;
	int index = 0;
	for(int i = 1; i <= 100;i++){
		int number;
		scanf("%d",&number);
		if(max < number){
			max = number;
			index = i;	
		}
	}
	printf("%d\n",max);
	printf("%d\n",index);
	return 0;
}
