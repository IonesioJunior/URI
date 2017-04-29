#include <stdio.h>

int main(){
    float value = 1;
    int index = 2;
    for(int i = 3; i < 40; i++){
            value += (float)i/(float)index;
            i++;
            index *= 2;
    }
    printf("%.2f\n",value);
    return 0;
}
