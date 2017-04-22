#include <stdio.h>
#include <stdlib.h>

int main(int argc,char** argv){
	int x,y;
	scanf("%d",&x);
	scanf("%d",&y);
	int sum = 0;
	if(x < y){
		for(int i = x; i <= y;i++){
			if(i % 13 != 0){
				sum = sum + i;
			}
		}
		printf("%d\n",sum);
	}else if(y < x){
		for(int i = y ; i <= x;i++){
			if(i % 13 != 0){
				sum = sum + i;
			}
		}
		printf("%d\n",sum);
	}else{
		if(x % 13 != 0){
			sum = sum + x;
		}
		printf("%d\n",sum);
	}
	return 0;
}
