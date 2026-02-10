#include <stdio.h>

int main()
{
    float vize;
    printf("Vize notunu giriniz.\n");
    scanf("%f", &vize); /*float türünde vize değişkeni tanımladım, kullanıcıdan vize notunu isteyip bunu vize'ye atadım.*/

    float final;
    printf("Final notunu giriniz.\n");
    scanf("%f", &final); /*float türünde final değişkeni tanımladım, kullanıcıdan final notunu isteyip bunu final'e atadım.*/
    
    float ortalama = vize * 0.4 + final * 0.6;
    printf("Ortalama: %f\n", ortalama); 
    /*float türünde ortalama değişkenini tanımlayıp vizenin %40'ı ile finalin %60'ının toplamını ortalamaya atadım ve ekrana yazdırdım.*/

    if (ortalama >= 60)
     printf("Ogrenci dersten gecmistir.\n");
    else
     printf("Ogrenci dersten kalmistir.\n");
    /*ortalama 60'a eşit veya 60'tan büyükse öğrencinin dersi geçtiğini, 60'tan küçükse dersten kaldığını ekrana yazdırdım.*/
    return 0;
}