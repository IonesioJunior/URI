#include <iostream>
#include <stdio.h>

int main(int argc,char** argv){
    double mat[12][12];
    char ask;
    double sum = 0.0;
    
    std::cin >> ask;
    
    for(int i = 0; i < 12; i++){
            for(int j = 0; j < 12; j++){
                std::cin >> mat[i][j];
            	if(j > (11 - i) && j < i){
                 	sum += mat[i][j];
            	}
            }
   }
    
    if(ask == 'S')
         printf("%.1f\n", sum);
    else
         printf("%.1f\n", sum/30.0);
    return 0;
}
