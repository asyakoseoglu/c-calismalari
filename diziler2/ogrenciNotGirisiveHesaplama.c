#include <stdio.h>

int main(){
    
    int ogrenciNot[3][3];

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d. ogrencinin %d. notu : ", i+1, j+1);
            scanf("%d", &ogrenciNot[i][j]);
        }
    }
    
    int toplam=0;
    for(int i=0; i<3; i++){
       toplam=toplam+ogrenciNot[i][i];
    }

    printf("1. ogrencinin 1. notu + 2. ogrencinin 2. notu + 3. ogrencinin 3. notu = %d\n", toplam);

    for(int j=0; j<3; j++){
        int sinavToplam = 0;
        for(int i=0; i<3; i++){
            sinavToplam += ogrenciNot[i][j];
        }
        int ort = sinavToplam / 3;
        printf("%d. sinavin ortalamasi: %d\n", j+1, ort);
    }

    return 0;
}