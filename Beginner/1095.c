#include <stdlib.h>
#include <stdio.h>

int main(int argc,char** argv){
	int i = 1;
	int j = 60;
	while(j){
		printf("I=%d J=%d\n",i,j);
		i = i + 3;
		j = j - 5;
	}
	printf("I=%d J=%d\n",i,j);
	return 0;
}
