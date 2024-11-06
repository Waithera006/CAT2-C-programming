//declaring and initialising an array
/*
MARY WAITHERA KAMAU
CT101/G/24877/24
*/

//an array is a collection of elements of the same data type stored in contiguos memory locations.
#include<stdio.h>
int main(){
    int i,j;
    int scores[2][2]={
        {65,92},
        {35,70}
        };
//printing using the nested for loop
        for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        printf("%d",scores[i][j]);
        }
        printf("scores[%d][%d]=%d\n",i,j,scores[i][j]);
        }

        return 0;
        }
