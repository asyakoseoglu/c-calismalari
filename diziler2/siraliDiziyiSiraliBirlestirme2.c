#include <stdio.h>
#define SIZE 10

int main() {
    int a[SIZE] = {2, 3, 6, 7, 8, 19, 45, 67, 78, 79};
    int b[SIZE] = {1, 2, 4, 5, 7, 9, 10, 18, 33, 47};
    int c[SIZE + SIZE]; // Birleştirilmiş dizi

    int i = 0; // a dizisinin indisi
    int j = 0; // b dizisinin indisi
    int k = 0; // c dizisinin indisi

    // 1. AŞAMA: İki dizide de eleman varken karşılaştırıp ekle
    while (i < SIZE && j < SIZE) {
        if (a[i] < b[j]) {
            c[k++] = a[i++]; // a'yı ekle, i ve k'yı artır
        } else {
            c[k++] = b[j++]; // b'yi ekle, j ve k'yı artır
        }
    }

    // 2. AŞAMA: Eğer a dizisinde eleman arttıysa, kalanları ekle
    while (i < SIZE) {
        c[k++] = a[i++];
    }

    // 3. AŞAMA: Eğer b dizisinde eleman arttıysa, kalanları ekle
    while (j < SIZE) {
        c[k++] = b[j++];
    }

    // Sonucu Yazdır
    printf("Birlestirilmis Dizi:\n");
    for (k = 0; k < SIZE + SIZE; k++) {
        printf("%d ", c[k]);
    }
    
    return 0;
}