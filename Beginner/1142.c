#include <stdlib.h>
#include <stdio.h>


int main(int argc,char** argv){
	int number;
	scanf("%d",&number);
	int i = 1;
	int line = 0;
	while(line < number){
		printf("%d ",i);
		i++;
		if(i % 4 == 0){
			printf("PUM\n");
			line++;
			i++;
		}	
	}
	return 0;
}
