#include <stdio.h>
#include <stdlib.h>


int main(int argc,char** argv){
	int value;
	scanf("%d",&value);
	while(value){
		float x,y,z;
		scanf("%f %f %f",&x,&y,&z);
		float sum = ((x * 2) + (y * 3) + (z * 5)) / (2+ 3 + 5);
		printf("%.1f\n",sum);
		value--;
	}
	return 0;
}
