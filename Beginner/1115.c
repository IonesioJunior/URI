#include <stdio.h>
#include <stdlib.h>


int main(int argc,char** argv){
	while(1){
		int x,y;
		scanf("%d %d",&x,&y);
		if(x > 0 && y> 0){
			printf("primeiro\n");
		}else if(x > 0 && y < 0){
			printf("quarto\n");
		}else if(x < 0 && y < 0){
			printf("terceiro\n");
		}else if(x < 0 && y > 0){
			printf("segundo\n");
		}else{
			break;
		}
	}
	return 0;
}
