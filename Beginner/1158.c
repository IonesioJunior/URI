#include <stdio.h>
#include <stdlib.h>


int main(int argc,char** argv){
	int n;
	scanf("%d",&n);
	while(n > 0){
		int x,y;
		scanf("%d %d",&x,&y);
		if(x % 2 == 0){
			x++;
		}
		int sum = 0;
		while(y > 0){
			sum = sum + x;
			x = x + 2;
			y--;
		}
		printf("%d\n",sum);
		n--;
	}
	return 0;
}
