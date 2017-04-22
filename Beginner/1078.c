#include <stdio.h>
#include <stdlib.h>


int main(int argc,char**argv){
	int value;
	scanf("%d",&value);
	for(int i = 1;i <=10;i++){
		printf("%d x %d = %d\n",i,value,value * i);
	}
	return 0;
}
