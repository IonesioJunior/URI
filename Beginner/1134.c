#include <stdio.h>
#include <stdlib.h>


int main(int argc,char** argv){
	int alcohol = 0;
	int diesel = 0;
	int gasoline = 0;
	while(1){
		int choice;
		scanf("%d",&choice);
		if(choice == 1){
			alcohol++;
		}else if(choice == 2){
			gasoline++;
		}else if(choice == 3){
			diesel++;	
		}else if(choice == 4){
			break;
		}else{
			continue;
		}
	}
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n",alcohol);
	printf("Gasolina: %d\n",gasoline);
	printf("Diesel: %d\n",diesel);

}
