#include <stdio.h> 

int main ()
{
    float kenar1;
    printf("1. kenarin uzunlugunu giriniz.\n");
    scanf("%f", &kenar1); /*float türünde kenar1 değişkeni tanımladım, kullanıcıdan 1. kenarın uzunluğunu isteyip bunu kenar1'e atadım.*/
    
    float kenar2;
    printf("2. kenarin uzunlugunu giriniz.\n");
    scanf("%f", &kenar2);  /*float türünde kenar2 değişkeni tanımladım, kullanıcıdan 2. kenarın uzunluğunu isteyip bunu kenar2'ye atadım.*/

    float alan = kenar1 * kenar2;
    printf("Alan = %f\n", alan); /*float türünde alan değişkeni tanımlayıp kenar1 ve kenar2'nin çarpımını alan'a atadım, ekrana yazdırdım.*/

    float cevre = 2 * ( kenar1 + kenar2 );
    printf("Cevre = %f\n", cevre);  /*float türünde cevre değişkeni tanımlayıp kenar1 ve kenar2'nin toplamlarının iki katını cevre'ye atadım, ekrana yazdırdım.*/

    return 0;
}