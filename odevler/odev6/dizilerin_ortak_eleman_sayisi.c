#include <stdio.h>

// fonksiyon prototipleri
int elemanKontrol(int dizi[], int n, int aranan);
int ortakElemanSayac(int dizi1[], int n1, int dizi2[], int n2);

// ana fonksiyon
int main(){
    
    int n1,n2; // dizilerin boyutlari

    // dizilerin boyurları ve elemanları kullanıcıdan alınır.
    printf("Birinci dizinin eleman sayisini giriniz: ");
    scanf("%d", &n1);
    int dizi1[n1];
    printf("1. dizinin elemanlarini giriniz:\n");
    for(int i=0; i<n1; i++){
        scanf("%d", &dizi1[i]);
    }

    printf("İkinci dizinin eleman sayisini giriniz: ");
    scanf("%d", &n2);
    int dizi2[n2];
    printf("2. dizinin elemanlarini giriniz:\n");
    for(int i=0; i<n2; i++){
        scanf("%d", &dizi2[i]);
    }

    // ortak eleman sayısını hesaplayan fonksiyon çağırılır ve sonuç yazdırılır.
    int ortakElemanSayisi = ortakElemanSayac(dizi1, n1, dizi2, n2);
    printf("Ortak eleman sayisi: %d\n", ortakElemanSayisi);

    return 0;
}

// a) fonksiyonu : bir elemanın dizide olup olmadığını kontrol eden fonksiyon
int elemanKontrol(int dizi[], int n, int aranan){
    // dizinin her elemanının aranan elemana eşit olup olmadığı kontrol edilir
    for(int i=0; i<n; i++){
        if(dizi[i] == aranan){  // aranan eleman karşılaştırılan 2. dizinin bir elemanıdır.
            return 1; // Eleman bulundu // dönen değer b fonksiyonunda if bloğunun içine gider.
        }
    }
    return 0; // Eleman bulunamadı // dönen değer b fonksiyonunda if bloğunun dışına gider.
}

// b) fonksiyonu : iki dizideki ortak elemanların sayısını hesaplayan fonksiyon
int ortakElemanSayac(int dizi1[], int n1, int dizi2[], int n2){
    int ortakSayac = 0; // ortak eleman sayısını tutan sayaç
    // birinci dizinin her elemanı için ikinci dizide olup olmadığını kontrol et
    for(int i=0; i<n1; i++){
        if(elemanKontrol(dizi2, n2, dizi1[i])){ // elemanKontrol fonksiyonu çağırılır "ikinci dizinin elemanı birinci dizide var mı?"
            ortakSayac++; // ortak eleman bulunduğunda sayaç artırılır
        }
    }
    return ortakSayac; // ortak eleman sayısı döndürülür main fonksiyonuna gider.
}