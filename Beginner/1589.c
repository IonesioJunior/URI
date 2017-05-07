#include <stdio.h>
#include <stdlib.h>

int main(int argc,char** argv){
	int num;
	scanf("%d",&num);
	while(num > 0){
		int r1,r2;
		scanf("%d %d",&r1,&r2);
		printf("%d\n",(r1 * 2 + r2* 2)/2);
		num--;
	}

}
