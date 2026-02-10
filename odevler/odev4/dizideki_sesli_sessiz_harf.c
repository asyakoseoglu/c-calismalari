#include <stdio.h>
#include <stdlib.h> //  srand ve rand fonksiyonları için kullanılan başlık dosyası
#include <time.h> // time fonksiyonu için kullanılan başlık dosyası

int main(){
    
    // rastgele sayı seçmek için kullanılan rand fonksiyonuna zamana bağlı random sayı seçtiren srand(time(0)) fonksiyonu kullanılır.
    srand(time(0));

    // dizinin eleman sayısı belirlenir.
    int n = rand () % 100 +1;
    
    // rastgele oluşturulacak int tipinde dizi ve elemanı tanımlanır.
    int dizi_ascii[n];
    int ascii;

    // random belirlenmiş eleman sayısı kadar random eleman belirlenip diziye atanır.
    for (int i=0; i<n; i++){
        ascii = rand() % 26 + 65;
        dizi_ascii[i]=ascii;
    }

    printf("olusan ascii dizi : {");
    for(int i=0; i<n; i++){
        if(i!=n-1)
          printf("%d, ", dizi_ascii[i]);
        else 
          printf("%d}", dizi_ascii[i]);
    }

    printf("\n");

    char dizi_metin[n+1]; // metin dizisi tanımlanır. stringin sonunda bulunan '\0' elemanı için 1 elemanlık yer eklenir.
    for(int i=0; i<n; i++){ // ASCII kodları metne çevrilir ve metin dizisine atanır.
        dizi_metin[i] = (char)dizi_ascii[i];
    }
    dizi_metin[n] = '\0'; // string dizisini sonlandırmak için dizinin son elemanına '\0' atanır.

    // oluşan metin dizisi yazdırılır.
    printf("olusan dizi : {");

    for(int i=0; i<n; i++){
        if(i!=n-1)
          printf("%c, ", dizi_metin[i]);
        else 
          printf("%c}", dizi_metin[i]);
    }

    printf("\n");
    
    // sesli ve sessiz harf sayısı için sayaçlar tanımlanır.
    int sesli_sayac=0, sessiz_sayac=0;

    //dizinin her elemanı kontrol edilerek sesli ve sessiz harf sayısı belirlenir.
    for(int i=0; i<n; i++){
        
        char c = dizi_metin[i];
        
        switch (c) {
        case 'A': case 'E': case 'I': case 'O': case 'U': 
            sesli_sayac++;
            break;
        
        default:
            sessiz_sayac++;
        
        }

    }
    
    // sesli ve sessiz harf sayısı, toplam harf sayısı yazdırılır.
    printf("sesli  harf   sayisi: %d\n", sesli_sayac);
    printf("sessiz harf   sayisi: %d\n", sessiz_sayac);
    printf("toplam eleman sayisi: %d\n", n);
    
    return 0;

}
