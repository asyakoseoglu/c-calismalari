#include <stdio.h>

int main()
{
    float sayi1;
    printf("1. sayiyi giriniz.\n");
    scanf("%f", &sayi1); /*kullanıcıdan sayı isteyip bunu sayi1'e atadım.*/

    float sayi2;
    printf("2. sayiyi giriniz.\n");
    scanf("%f", &sayi2); /*kullanıcıdan sayı isteyip bunu sayi2'ye atadım.*/

    float toplam = sayi1 + sayi2;
    printf("Sayilarin toplami : %f+%f isleminin sonucu = %f\n", sayi1, sayi2, toplam); 
    /*toplam değişkenine sayi1 ve sayi2'nin toplamını atadım ve ekrana yazdırdım*/

    float fark = sayi1 - sayi2;
    printf("Sayilarin farki  : %f-%f isleminin sonucu = %f\n", sayi1, sayi2, fark);
    /*fark değişkenine sayi1 ve sayi2'nin farkını atadım ve ekrana yazdırdım*/


    float carpim = sayi1 * sayi2;
    printf("Sayilarin carpimi : %f*%f isleminin sonucu = %f\n", sayi1, sayi2, carpim);
    /*carpim değişkenine sayi1 ve sayi2'nin çarpımını atadım ve ekrana yazdırdım*/

    return 0;
}