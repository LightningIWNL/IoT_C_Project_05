#include "stdio.h"

void main(){
    int num[5];
    int i = 0;


    do
    {
        num[i] = (i+1) * 10;
        i++;
    } while (i < 5);

    i = 0;

    do
    {
        printf("%d\n",num[i]);
        i++;
    } while (i < 5);
    
    
}