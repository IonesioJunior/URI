#include <stdio.h>
#include <stdlib.h>


int main(int argc,char** argv){
	int number;
	scanf("%d",&number);
	while(number > 0){
		int a,b;
		float pa;
		float pb;
		scanf("%d %d %f %f",&a,&b,&pa,&pb);
		int years = 0;
		while(a <=  b){
			int resulta = a * (pa / 100);
			int resultb = b * (pb / 100);
			a = a + resulta;
			b = b + resultb;
			years++;
		}
		if(years <= 100){
			printf("%d anos.\n",years);
		}else{
			printf("Mais de 1 seculo.\n");
		}
		number--;
	}
	return 0;
}
