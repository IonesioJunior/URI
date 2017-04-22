#include <stdio.h>
#include <stdlib.h>


int main(int argc,char** argv){
	int number;
	scanf("%d",&number);
	int line = 0;
	int i = 1;
	while(line < number){
		printf("%d %d %d\n",i,i * i,i*i*i);
		line++;
		i++;
	}
	return 0;
}
