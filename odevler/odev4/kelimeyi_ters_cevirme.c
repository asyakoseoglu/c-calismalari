#include <stdio.h>
#include <string.h> //strlen fonksiyonu için gerekli başlık dosyası

int main() {
    
    // kullanıcıdan kelime alınır, fgets ile okunur, enterdan kaynaklanan \n karakteri temizlenir.
    char kelime[100];
    printf("Bir kelime giriniz \n");
    fgets(kelime, sizeof(kelime), stdin);
    if (kelime[strlen(kelime)-1] == '\n')
       kelime[strlen(kelime)-1] = '\0';
       
    // dizinin uzunluğu strlen fonksiyonu ile belirlenir ve ekrana yazdırılır.
    int uzunluk;
    uzunluk = strlen(kelime);
    printf("girilen kelimenin uzunlugu: %d \n", uzunluk);

    // girilen kelimenin tersi için yeni bir dizi tanımlanır, for döngüsüyle yeni dizinin elemanlarına ilk dizinin elemanları tersten atanır.
    char ters_kelime[sizeof(kelime)];
    for(int i=0; i<uzunluk; i++){
        ters_kelime[i]=kelime[uzunluk-1-i];
    }

    // girilen kelimenin tersi ekrana yazdırılır.
    printf("girilen kelimenin tersi: %s\n", ters_kelime);

    return 0;
}