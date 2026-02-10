#include <stdio.h>

// fonksiyon prototipleri
int max_eleman_indisi(int dizi[], int n);
int dizi_kipi(int notlar[], int n);

// ana fonksiyon
int main() {
    int n; // dizinin boyutu

    // dizinin boyutu ve elemanları kullanıcıdan alınır.
    printf("Ogrenci sayisini giriniz: ");
    scanf("%d", &n);
    int notlar[n];
    printf("Notlarini giriniz (0-100 arasi):\n");
    for(int i=0; i<n; i++) {
        scanf("%d", &notlar[i]);
    }

    int kip = dizi_kipi(notlar, n); // dizinin kipini bulan fonksiyon çağırılır
    printf("Dizinin kipi : %d\n", kip); // bulunan kip yazdırılır
    return 0;
}

// a) fonksiyonu : dizideki maksimum elemanın indeksini bulan fonksiyon
int max_eleman_indisi(int dizi[], int n) {
    int maxIndis=0; // maksimum elemanın indeksini tutan değişken
    for(int i=1; i<n; i++) {
        if(dizi[i] > dizi[maxIndis]) {
            maxIndis = i; // yeni maksimum eleman indeksi
        }
    }
    return maxIndis; // maksimum eleman indeksini döndürülür
}

// b) fonksiyonu : dizinin kipini bulan fonksiyon
int dizi_kipi(int notlar[], int n) {
    int count[101] = {0}; // bir elemanın(notun) dizide kaç kere geçtiğini gösteren dizi

    for (int i=0; i<n; i++) {
        count[notlar[i]]++; // her notun için o notun adetini arttır
    }

    return max_eleman_indisi(count, 101); // en çok tekrar eden notun indeksini döndürür // en büyük sayının indisi = dizide en çok bulunan eleman.
}