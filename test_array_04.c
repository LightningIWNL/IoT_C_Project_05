#include "stdio.h"

void main(){
    int num[5];
    int i = 0;

    while (i < 5)
    {
        num[i] = (i+1) * 10;
        i++;
    }
    i= 0;
    while (i <5)
    {
        printf("%d\n",num[i]);
        i++;
    }
    
    
}