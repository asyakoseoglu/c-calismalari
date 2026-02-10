#include <stdio.h>
int main()
{
    int i,j,k; /*int türünde i, j, k değişkenleri tanımlanır*/
    for (i=0,j=2,k=1; i<=4;i++) /* i, j, k değişkenlerine değer atanıp döngü başlatılır. Her döngünün başında i<=4 kontrol edilir. 
                                Her döngünün sonunda i 1 arttırılır. j ve k değişkenleri döngü boyunca aynı kalır.*/
        printf("%d\n", i+j+k); /* i<=4 koşulu sağlandıysa ekrana o döngüdeki i, j, k değerlerinin toplamı yazdırılır ve i++ adımına dönülür.*/
    return 0; /* fonksiyon sonlandırılır*/
} /*çıktı: 3 (i=0,j=2,k=1)
           4 (i=1,j=2,k=1)
           5 (i=2,j=2,k=1)
           6 (i=3,j=2,k=1)
           7 (i=4,j=2,k=1)
             olur*/