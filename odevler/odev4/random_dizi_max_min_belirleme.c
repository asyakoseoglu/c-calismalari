#include <stdio.h>
#include <stdlib.h> //  srand ve rand fonksiyonları için kullanılan başlık dosyası
#include <time.h> // time fonksiyonu için kullanılan başlık dosyası

int main(){
    
    // rastgele sayı seçmek için kullanılan rand fonksiyonuna zamana bağlı random sayı seçtiren srand(time(0)) fonksiyonu kullanılır.
    srand(time(0));

    // rastgele oluşturulacak dizi ve elemanı tanımlanır.
    int dizi[50];
    int eleman;

    // eleman sayısı kadar random eleman belirlenip diziye atanır.
    for (int i=0; i<50; i++){
        eleman = rand() % 1000 + 1;
        dizi[i]=eleman;
    }

    // oluşan dizi yazdırılır.
    printf("olusan dizi : {");

    for(int i=0; i<50; i++){
        if(i!=50-1)
          printf("%d, ", dizi[i]);
        else 
          printf("%d}", dizi[i]);
    }

    printf("\n");

    // karşılaştırma yapılabilmesi için aranan sayı türlerinin hepsine dizinin bir elemanı atanır.
    int sayac, enBuyuk = dizi[0], enBuyukIkinci = dizi[0], enKucuk = dizi[0];
    
    // dizinin her elemanı kontrol edilerek aranan sayı türleri belirlenir.
    for (int i=0; i<50; i++){
    
        if (dizi[i]>enBuyuk)
           enBuyukIkinci=enBuyuk , enBuyuk=dizi[i];
        else if (dizi[i]>enBuyukIkinci)
            enBuyukIkinci=dizi[i];
        if (dizi[i]<enKucuk)
            enKucuk=dizi[i];

    }
    
    // belirlenen sayı türleri yazdırılır.
    printf("Dizideki en buyuk sayi: %d\n", enBuyuk);
    printf("Dizideki en buyuk ikinci sayi: %d\n", enBuyukIkinci);
    printf("Dizideki en kucuk sayi: %d\n", enKucuk);

    return 0;
}