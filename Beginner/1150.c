#include <stdlib.h>
#include <stdio.h>
#include <limits.h>


int main(int argc,char ** argv){
	int first;
	scanf("%d",&first);
	int second = INT_MIN;
	while(first >= second){
		scanf("%d",&second);
	}
	int number = first;
	int acc = first;
	int count = 1;
	while(acc <= second){
		number++;
		acc = acc + number;
		count++;
	}
	printf("%d\n",count);
	return 0;
}
