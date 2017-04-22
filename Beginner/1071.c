#include <stdio.h>
#include <stdlib.h>

int main(){
	int x,y;
	int count = 0;
	scanf("%d",&x);
	scanf("%d",&y);
	if(x < y){
		for(int i = x + 1; i < y;i++){
			if(i % 2 != 0){
				count = count + i;
			}
		}
		printf("%d\n",count);
	}else if(x > y ){
		for(int i = y+ 1 ; i < x;i++){
			if(i % 2 != 0){
				count = count  + i;
			}
		}
		
		printf("%d\n",count);
	}else{
		printf("%d\n",count);	
	}
}
