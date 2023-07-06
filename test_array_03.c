#include "stdio.h"

void main(){

    int num[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        num[i] = (i+1) * 10;
        printf("%d\n",num[i]);
    }
    


}