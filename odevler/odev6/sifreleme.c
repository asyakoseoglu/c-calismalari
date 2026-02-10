#include <stdio.h>
#include <ctype.h>
#include <string.h>

void sifrele(char *dizi); // fonksiyon prototipi

int main(){
    char dizi[100]; // string için dizi
    int toplam=0; // string içindeki rakamlarin toplami için değişken

    // kullanıcıdan string alınır.
    printf("string giriniz: ");
    scanf("%s", dizi);

    // dizideki rakamlar tespit edilir ve toplanır.
    for(int i=0; dizi[i]!='\0'; i++){ // son eleman '/0' gelene kadar her eleman için:
        if(isdigit(dizi[i])){ // eleman rakam ise karakterden 0 çıkarılarak integer değere çevrilir ve toplanır
            toplam += dizi[i] - '0'; // '5' (ASCII:53) - '0' (ASCII:48) = 5
        }
    }

    // sonuçlar yazdırılır
    printf("Girilen orijinal string: %s\n", dizi);
    printf("rakamlarin toplami: %d\n", toplam);
    
    // şifreleme fonksiyonu çağrılır ve sifrelenmiş dizi yazdırılır
    sifrele(dizi); 
    printf("sifrelenmis string: %s\n", dizi);

    return 0;
}

// sifreleme fonksiyonu
void sifrele(char *dizi){ // son eleman '/0' gelene kadar her eleman için:
    for (int i=0; dizi[i]!='\0'; i++){
        // küçük harfler
        if (dizi[i]>='a' && dizi[i]<='z'){
            dizi[i] = ((dizi[i]-'a'+3)%26)+'a'; // harfin alfabedeki yeri bulunur (dizi[i]-'a') // harf 'a' ise:0 (97-97), 'b' ise:1 (98-98)
                                                // 3 eklenir (a-->d)
                                                // mod 26 (z--> 122-97+3=28 --> 28/26=2 -->c) alınır
                                                // tekrar harfe çevrilir (+'a')
        }
        // büyük harfler
        else if (dizi[i]>='A' && dizi[i]<='Z'){
            dizi[i] = ((dizi[i]-'A'+3)%26)+'A';
        }
    }
}