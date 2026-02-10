#include <stdio.h>

int main(){
    
    float ogr1[3],ogr2[3],ogr3[3];

    for(int i=0; i<3; i++){
        printf("1. ogrencinin %d. notu: ",i+1);
        scanf("%f", &ogr1[i]);
        printf("2. ogrencinin %d. notu: ",i+1);
        scanf("%f", &ogr2[i]);
        printf("3. ogrencinin %d. notu: ",i+1);
        scanf("%f", &ogr3[i]);
    }

    // çıktı 1
    printf("1. ogrencinin 1. notu + 2. ogrencinin 2. notu + 3. ogrnecinin 3. notu = %.2f\n", ogr1[0]+ogr2[1]+ogr3[2]);

    // çıktı 2

    for(int i=0; i<3; i++){
        printf("%d. sinavin ortalamasi: %.2f\n", i+1, (ogr1[i]+ogr2[i]+ogr3[i])/3.0);
    }

    return 0;
}