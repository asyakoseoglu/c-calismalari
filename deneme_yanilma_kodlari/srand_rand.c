#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int gizlisayi = rand() % 100 + 1;

    int i;
    for (i=1; i<=5; i++ ){
        int tahmin;
        printf("%d. tahmininizi girin.\n", i);
        scanf("%d", &tahmin);

        if (tahmin > gizlisayi)
           printf("Daha küçük bir sayi giriniz\n");
        else if (tahmin < gizlisayi)
           printf("Daha büyük bir sayi giriniz\n");
        else {
           printf("Tebrikler, doğru tahmin ettiniz.");
           break; }
    }

    if (i > 5 )
       printf("Tahmin hakkiniz bitti. Gizli sayi: %d.", gizlisayi);
    
    return 0;
}