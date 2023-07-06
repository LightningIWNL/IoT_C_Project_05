

#include "stdio.h"

void main(){
    // int myArray[] = {10, 20, 30, 40, 50};
    // int secondArray[5];
    // secondArray = {1,2,3,4,5,6};
    // printf("%d",myArray[1]);
    // printf("%d",secondArray[1]);

    int scoreA;
    int scoreB[5];

    float salalyIoTA;
    float salalyIoTB[100];

    char nameA;
    char nameB[50];
    
    scoreA = 100;
    printf("%d\n",scoreA);
    scoreB[1] = 200;
    scoreB[4] = 400;

    printf("%d\n",scoreB[1]);
    printf("%d\n",scoreB[4]);
    
    salalyIoTB[29]  = 1000.25;

    salalyIoTB[99] = scoreB[1] + salalyIoTB[29];

    printf("%.2f",salalyIoTB[99]);


    
}