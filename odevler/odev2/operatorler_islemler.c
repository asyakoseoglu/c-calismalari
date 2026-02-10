#include <stdio.h> /*Bu satır ön işlemciye stdio.h başlık dosyasını programa eklemesini söyler.*/

int main () { /* "return type" belirlemek için "int" , C'nin ana fonksiyonu olan "main", ve main'in fonksiyon olduğunu gösteren "()"
    ve "blok"ların başında bulunan "{" kullanılmıştır.*/
    int x = 10, y = 3; /*int türünde iki değişken tanımlanmış ve değer atanmıştır*/
    x %= y; /* x = x % y anlamına gelir satır sonunda x=1, y=3tür.*/
    y += x * 2; /* y = y + x * 2 anlamına gelir satır sonunda x=1, y=5tir.*/
    printf("%d %d", x, y); /* int türünden ifadeleri onluk sistemde yazan d tip belirleyici kullanılmış ve sırasıyla değişkenler atanarak ekrana
    yazdırılmıştır. Ekranda " 1 5 " yazar.*/
    return 0; /*bu satır programı sonlandırır.*/
} /*bu satır fonksiyonu sonlandırır.*/