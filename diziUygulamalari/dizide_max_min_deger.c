#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int dizi[10];

    for(int i=0; i<10; i++){
        
        dizi[i]=rand()%100+1;

        printf("%d. dizi elemani = %d \n", i, dizi[i]);
    }

    int max=dizi[0], min=dizi[0];
    for(int i=1;i<10;i++){
        if(dizi[i]<min){
            min=dizi[i];
        }
        else if( dizi[i]>max){
            max=dizi[i];
        }
    }

    printf("\nen buyuk deger=%d\n", max);
    printf("en kucuk deger=%d", min);

    return 0;

}