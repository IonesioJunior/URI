#include <stdio.h>
#include <stdlib.h>


int main(int argc,char** argv){
	int x,y;
	scanf("%d",&x);
	scanf("%d",&y);
	if(x < y){
		for(int i = x+ 1;i < y;i++){
			if(i % 5 == 2 || i % 5 == 3){
				printf("%d\n",i);
			}
		}	
	}else{
		for(int i = y + 1;i < x;i++){
			if(i % 5 == 2 || i % 5 == 3){
				printf("%d\n",i);
			}
		}
	}

}
