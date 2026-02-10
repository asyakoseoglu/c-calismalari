#include <stdio.h>
#define SIZE 10

int main() {
    // İki adet sıralı dizi tanımlıyoruz
    int a[SIZE] = {2, 3, 6, 7, 8, 19, 45, 67, 78, 79};
    int b[SIZE] = {1, 2, 4, 5, 7, 9, 10, 18, 33, 47};
    
    // Sonuçların birleştirileceği daha büyük dizi
    int c[SIZE + SIZE];
    
    int k;
    int index1 = 0; // a dizisinin sayacı
    int index2 = 0; // b dizisinin sayacı

    // Toplam eleman sayısı kadar (20 kere) dönecek döngü
    for (k = 0; k < SIZE + SIZE; ++k) {
        
        // DURUM 1: Eğer 'a' dizisindeki tüm elemanlar bittiyse,
        // geriye kalan 'b' elemanlarını ekle.
        if (index1 == SIZE) {
            c[k] = b[index2++];
        }
        
        // DURUM 2: Eğer 'b' dizisindeki tüm elemanlar bittiyse,
        // geriye kalan 'a' elemanlarını ekle.
        else if (index2 == SIZE) {
            c[k] = a[index1++];
        }
        
        // DURUM 3: Her iki dizide de eleman varsa karşılaştır.
        else {
            // Küçük olanı seç ve 'c' dizisine ekle
            if (a[index1] < b[index2]) {
                c[k] = a[index1++];
            } else {
                c[k] = b[index2++];
            }
        }
    }

    // Sonuç dizisini ekrana yazdır
    printf("Birleştirilmiş Dizi: \n");
    for (k = 0; k < SIZE + SIZE; ++k) {
        printf("%3d ", c[k]);
    }
    
    printf("\n"); // Temiz bir çıkış için yeni satır

    return 0;
}