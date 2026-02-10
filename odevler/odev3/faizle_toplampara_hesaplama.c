#include <stdio.h>

int main()
{
    float toplamPara = 70000;
    int yil=0;

    /*toplam para 150000 Tl'yi aşana kadar devam edecek do while döngüsüdür. 
    Her döngüde toplamPara değişkeni faiz formülüne göre değişir ve 
    faiz her yıl sonunda değiştiğinden yıl değişkeni her döngüde bir kez artar. */
    do {
        toplamPara = toplamPara + toplamPara*13.4/100;
        yil++;
    } while (toplamPara <= 150000);
    
    printf ("Toplam para %d. yilda 150000 Tl'yi asar.", yil);
    return 0;
}