#include <stdlib.h>
#include <stdio.h>


int main(int argc,char** argv){
	int x,y;
	scanf("%d %d",&x,&y);
	int i = 1;
	int count = 0;
	while(i <= y){
		if(count == x - 1){
			printf("%d",i);
		}else{
			printf("%d ",i);
		}
		count++;
		i++;
		if(count == x){
			printf("\n");
			count = 0;
		}
	}
	if(count != 0){
		printf("\n");
	}
	return 0;
}
