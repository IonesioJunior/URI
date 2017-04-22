#include <stdio.h>
#include <stdlib.h>


int main(int argc,char** argv){
	while(1){
		int number;
		scanf("%d",&number);
		if(number == 0){
			break;
		}else{
			int last = 1;
			for(int i = 1;i < number;i++){
				printf("%d ",i);
				last = i + 1;
			}
			printf("%d\n",last);
		}
	}
}
