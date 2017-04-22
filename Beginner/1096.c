#include <stdio.h>
#include <stdlib.h>


int main(int argc,char** argv){
	int i = 1;
	int j = 7;
	int count = 0;
	while(i != 11){
		printf("I=%d J=%d\n",i,j);
		j--;
		count++;
		if(count == 3){
			count = 0;
			j = 7;
			i = i + 2;
		}
	}
	return 0;
}
