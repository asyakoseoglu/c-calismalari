#include <stdio.h> /*Bu satır ön işlemciye stdio.h başlık dosyasını programa eklemesini söyler.*/

int main() 
{ /* "return type" belirlemek için "int" , C'nin ana fonksiyonu olan "main", ve main'in fonksiyon olduğunu gösteren "()"
    ve "blok"ların başında bulunan "{" kullanılmıştır.*/
   int a = 10, c; /*a ve d int türünde değişken tanımlamış a'ya 10 atanmış.*/

   c = a; /*a'nın değeri c'ye aktarılır. c=10*/
   printf("c = %d\n", c); /* int türünden ifadeleri onluk sistemde yazan d tip belirleyici kullanılmış ve c ekrana yazdırılmış*/
   c = ++a; /*a'nın değeri 1 arttırılıp c'ye aktarılır. c=11 a=11*/
   printf("c = %d\n", c); /* int türünden ifadeleri onluk sistemde yazan d tip belirleyici kullanılmış ve c ekrana yazdırılmış*/
   c = a++; /*a'nın değeri c'ye aktarılır sonra 1 arttırılır. c=11 a=12 */
   printf("c = %d\n", c); /* int türünden ifadeleri onluk sistemde yazan d tip belirleyici kullanılmış ve c ekrana yazdırılmış*/
   c -= a; /*c = c - a işlemi yapılır. c=-1 a=12*/ 
   printf("c = %d\n", c); /* int türünden ifadeleri onluk sistemde yazan d tip belirleyici kullanılmış ve c ekrana yazdırılmış*/
   c *= a; /*c = c * a işlemi yapılır. c=-12 a=12*/
   printf("c = %d\n", c); /* int türünden ifadeleri onluk sistemde yazan d tip belirleyici kullanılmış ve c ekrana yazdırılmış*/
   c /= a; 
   printf("c = %d\n", c); /* c = c / a işlemi yapılır. c=-1 a=12*//* int türünden ifadeleri onluk sistemde yazan d tip belirleyici kullanılmış ve c ekrana yazdırılmış*/
   c %= a; /*c a'ya bölünür kalan c'ye atanır. c=-1  */
   printf("c = %d\n", c); /* int türünden ifadeleri onluk sistemde yazan d tip belirleyici kullanılmış ve c ekrana yazdırılmış*/
   return 0; /*bu satır programı sonlandırır.*/
} /*bu satır fonksiyonu sonlandırır.*/