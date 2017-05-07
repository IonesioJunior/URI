#include <stdio.h>
#include <stdlib.h>


int main(int argc,char** argv){
	int par[5];
	int impar[5];
	int loop = 15;
	int indexP = 0;
	int indexI = 0;
	while(loop > 0){
		int value;
		scanf("%d",&value);
		if(value %2 == 0){
			par[indexP++] = value;
		}else{
			impar[indexI++] = value;
		}

		if(indexP == 5){
			int index = 0;
			while(index < indexP){
				printf("par[%d] = %d\n",index,par[index]);
				index++;
			}
			indexP = 0;
		}
		if(indexI == 5){
			int index = 0;
			while(index < indexI){
				printf("impar[%d] = %d\n",index , impar[index]);
				index++;
			}
			indexI = 0;
		}
		loop--;
	}
	int finalIndexP = 0;
	int finalIndexI = 0;
	while(finalIndexI < indexI){
		printf("impar[%d] = %d\n",finalIndexI,impar[finalIndexI]);
		finalIndexI++;
	}
	while(finalIndexP < indexP){
		printf("par[%d] = %d\n",finalIndexP,par[finalIndexP]);
		finalIndexP++;
	
	}

}
