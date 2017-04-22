#include <stdio.h>
#include <stdlib.h>


int main(){
	int i = 1;
	int j = 7;
	int count = 0;
	while(i != 11){
		count++;
		printf("I=%d J=%d\n",i,j);
		if(count == 3){
			count = 0;
			i = i + 2;
			j = j + 5;
		}
		j--;
	}
	return 0;
}
