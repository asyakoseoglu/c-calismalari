#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    int i,j,k=0,p,arr1[20][20],brr1[20][20],sat,sut;

    srand(time(0));
    sat=20;sut=20;
    int sw;

    for(i=0;i<sat;i++){
        for(j=0;j<sut;j++){
            arr1[i][j]=rand()%100+1;

            printf("%5d",arr1[i][j]);    
        }
        printf("\n");
    }
    sw=sut;
    sut=sat;
    sat=sw;

    for(i=0;i<sat;i++){
        for(j=0;j<sut;j++){
            brr1[i][j]=arr1[j][i];
        }
    }

    printf("\n\nThe transpose of a matris is: \n");
    for(i=0;i<sat;i++){
        for(j=0;j<sut;j++){
            printf("%5d",brr1[i][j]);
        }
        printf("\n");
    }

}