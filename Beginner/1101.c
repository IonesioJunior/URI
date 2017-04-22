#include <stdio.h>
#include <stdlib.h>

int main(int argc,char** argv){
	while(1){
		int x,y;
		scanf("%d %d",&x,&y);
		if(x <= 0 || y <= 0){
			break;
		}
		int sum = 0;
		if(x < y){
			while(x != y + 1){
				printf("%d ",x);
				sum = sum + x;
				x++;	
			}
		}else{
			while(y != x + 1){
				printf("%d ",y);
				sum = sum + y;
				y++;
			}
		}
		printf("Sum=%d\n",sum);
	}
}
