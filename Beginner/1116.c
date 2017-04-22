#include <stdio.h>
#include <stdlib.h>

int main(int argc,char** argv){
	int loop;
	scanf("%d",&loop);
	while(loop){
		float x,y;
		scanf("%f %f",&x,&y);
		if(y == 0){
			printf("divisao impossivel\n");
		}else{
			printf("%.1f\n",x /y);
		}
		loop--;
	}
	return 0;
}
