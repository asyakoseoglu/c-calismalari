#include <stdio.h>
#include <string.h>

// Fonksiyon prototipleri
void alfabetik_sirala(char dizi[]);
void max(char dizi[]);

int main(){
    char dizi[100]; // Karakter dizi tanımlanır

    // Kullanıcıdan karakter dizisi girişi
    printf("Bir karakter dizisi giriniz: ");
    scanf("%s", dizi);

    // alfabetik sıralama fonksiyonu çağrılır
    alfabetik_sirala(dizi);
    printf("Alfabetik siralama: %s\n", dizi);

    // en büyük karakterleri bulan fonksiyon çağrılır
    max(dizi);

    return 0;
}

// a) alfabetik sıralama yapan fonksiyon // ascii değerlerine göre sıralama
void alfabetik_sirala(char dizi[]){
    int n = strlen(dizi); // dizi uzunluğunu alınır
    char temp; // geçici değişken tanımlanır. yer değiştirme için kullanılır
    // bubble sort algoritması ile sıralama yapılır
    for(int i = 0; i < n-1; i++){  // her i, kendinden sonraki elemanlarla (j) karşılaştırılır
        for(int j = i+1; j < n; j++){
            // eğer i nin ascii değeri j den büyükse yer değiştir
            if(dizi[i] > dizi[j]){
                temp = dizi[i];
                dizi[i] = dizi[j];
                dizi[j] = temp;
            }
        }
    }
}

// b) istenen en büyük karakterleri bulan fonksiyon // en büyük karakterler dizinin sonundadır
void max(char dizi[]){
    int n = strlen(dizi); // dizi uzunluğunu alınır

    // dizinin sonundan başlayarak en büyük 3 karakteri yazdır
    for (int i = 1; i <= 3; i++) {
    printf("En buyuk %d. karakter: %c\n", i, dizi[n - i]);
    }
}