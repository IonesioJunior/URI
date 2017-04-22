#include <stdio.h>
#include <stdlib.h>

int main(int argc,char** argv){
	int month;
	scanf("%d",&month);
	if(month == 1){
		printf("January");
		printf("\n");
	}else if(month == 2){
		printf("February");
                printf("\n");
	}else if(month == 3){
		printf("March");
                printf("\n");	
	}else if(month == 4){
		printf("April");
                printf("\n");	
	}else if(month == 5){
		printf("May");
                printf("\n");	
	}else if(month == 6){
		printf("June");
                printf("\n");	
	}else if(month == 7){
		printf("July");
                printf("\n");	
	}else if(month == 8){
		printf("August");
                printf("\n");
	}else if(month == 9){
		printf("September");
		printf("\n");
	}else if(month == 10){
		printf("October");
                printf("\n");
	}else if(month == 11){
		printf("November");
                printf("\n");
	}else{
		printf("December");
		printf("\n");
	}
	return  0;
}
