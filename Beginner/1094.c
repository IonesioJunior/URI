#include <stdio.h>
#include <stdlib.h>


int main(int argc,char** argv){
	int value;
	int coelhos = 0;
	int ratos = 0;
	int sapos = 0;
	scanf("%d",&value);
	while(value){
		char c;
		int number;
		scanf("%d %c",&number,&c);
		if(c == 'C'){
			coelhos = coelhos + number;	
		}else if(c ==  'R'){
			ratos = ratos + number;
		}else{
			sapos = sapos + number;
		}
		value--;
	}
	int total = ratos + sapos + coelhos;
	printf("Total: %d cobaias\n",total);
	printf("Total de coelhos: %d\n",coelhos);
	printf("Total de ratos: %d\n",ratos);
	printf("Total de sapos: %d\n",sapos);
	double p_coelhos = (coelhos * 100.0) / total;
	double p_ratos = (ratos * 100.0)/total;
	double p_sapos = (sapos* 100.0) / total;
	printf("Percentual de coelhos %.2f %\n",p_coelhos);
	printf("Percentual de ratos: %.2f %\n",p_ratos);
	printf("Percentual de sapos: %.2f %\n",p_sapos);
	return 0;
}
