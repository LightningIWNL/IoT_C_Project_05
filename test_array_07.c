#include "stdio.h"

void main(){
    int num[2][4];
    float salary[3][5];
    int x,y;

    for (x = 0; x < 2; x++)
    {
       for ( y = 0; y < 4; y++)
       {
        num[x][y] = (y+1+x+x+x+x) * 10;
       }
       
        
    }
    for (x = 0; x < 2; x++)
    {
       for ( y = 0; y < 4; y++)
       {
        printf("%d ",num[x][y]);
       }

       printf("\n");
       
        
    }
    
}