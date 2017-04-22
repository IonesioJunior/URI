#include <stdio.h>
#include <stdlib.h>

int main(int argc,char** argv){
	int n;
	scanf("%d",&n);
	int in = 0;
	int out = 0;
	while(n){
		int value;
		scanf("%d",&value);
		if(value >= 10 && value <= 20){
			in++;	
		}else{
			out++;
		}
		n--;
	}
	printf("%d in\n",in);
	printf("%d out\n",out);
	return 0;
}
