#include <stdio.h>
#include <stdlib.h>


int main(int arg,char** argv){
	int vit_gre = 0;
	int vit_int = 0;
	int empates = 0;
	while(1){
		int x,y;
		scanf("%d %d",&x,&y);
		if(x == y){
			empates++;
		}else if(x > y){
			vit_int++;
		}else{
			vit_gre++;
		}
		
		int choice;
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d",&choice);
		if(choice == 2){
			break;
		}
	}
	printf("%d grenais\n",empates + vit_int + vit_gre);
	printf("Inter:%d\n",vit_int);
	printf("Gremio:%d\n",vit_gre);
	printf("Empates:%d\n",empates);
	if(vit_int > vit_gre){
		printf("Inter venceu mais\n");	
	}else if(vit_gre > vit_int){
		printf("Gremio venceu mais\n");
	}else{
		printf("Não houve vencedor\n");
	}
	return 0;
}
