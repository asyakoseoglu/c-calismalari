#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int dizi[15];
    int min, max, max2, i;
    float toplam=0;

    for(int i=0; i<15; i++){
        
        dizi[i]=rand()%41+20;

        printf("%2d. dizi elemani = %d \n", i, dizi[i]);
    }

    max=min=max2=dizi[0]; // hoca max2 = max = 0, min = 100 yapmış
    for(i=0;i<15;i++){
        toplam+=dizi[i];
        if(dizi[i]<min){
            min=dizi[i];
        }
        if(dizi[i]>max){
            max2=max;
            max=dizi[i];
        }
        else if(dizi[i]>max2){
            max2=dizi[i];
        }
    }

    printf("\nen buyuk deger   = %d\n", max);
    printf("en buyuk ikinci  = %d\n", max2);
    printf("en kucuk deger   = %d\n", min);
    printf("ortalama         = %.2f",toplam/15 );

    return 0;
}