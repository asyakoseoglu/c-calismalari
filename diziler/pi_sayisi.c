#include <stdio.h>

int main(){

    float toplam=0, isaret=1, deger;
    int i;

    for (i=1; i<=99; i=i+2){
        
        printf("i = %d\n", i);
        printf("1/(float)i = %f\n\n", 1/(float)i);

        deger = isaret*(1/(float)i);
        toplam = toplam+deger;
        isaret = -isaret;
    }

    toplam = 4.0*toplam;
    printf("sonuc = %f", toplam);

    return 0;
}