#include <stdio.h>
#include <stdlib.h>



int main(int argc,char** argv){
	while(1){
		int password;
		scanf("%d",&password);
		if(password != 2002){
			printf("Senha Invalida\n");
		}else{
			printf("Acesso Permitido\n");
			break;
		}
	}
	return 0;
}
