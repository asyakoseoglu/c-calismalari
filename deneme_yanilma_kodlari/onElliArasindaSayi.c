#include <stdio.h>

int main ()
{ 
    int sayi;
    printf("bir sayi giriniz: \n");
    scanf("%d", &sayi);

    if (sayi>10 && sayi<50)
    printf("girilen sayi 10 ile 50 arasindadir.");
    else if (sayi<10)
    printf("girilen sayi 10'dan kucuktur.");
    else
    printf("girilen sayi 50'den buyuktur.");

    return 0;
}