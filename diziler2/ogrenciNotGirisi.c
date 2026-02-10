#include <stdio.h>

int main(){
    
    int ogrenciNot[3][3];

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d. ogrencinin %d. notu : ", i+1, j+1);
            scanf("%d", &ogrenciNot[i][j]);
        }
    }

    int toplam=ogrenciNot[0][0] + ogrenciNot[1][1] + ogrenciNot[2][2];
    printf("1. ogrencinin 1. notu + 2. ogrencinin 2. notu + 3. ogrencinin 3. notu = %d\n", toplam);

    for(int i=0; i<3; i++){

        int ort=(ogrenciNot[0][i] + ogrenciNot[1][i] + ogrenciNot[2][i]) / 3;
        printf("%d. sinavin ortalamasi: %d\n", i+1, ort);
    }

    return 0;
}
