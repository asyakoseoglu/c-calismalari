#include <stdio.h>

int main(){

    float toplam=0, isaret=1, deger;
    int i;

    for(i=1; i<=99999; i=i+2){
        deger = isaret*(1/(float)i);
        toplam += deger;
        isaret = -isaret;
    }

    toplam = 4.0*toplam;
    printf("sonuc = %f", toplam);

    return 0;
}