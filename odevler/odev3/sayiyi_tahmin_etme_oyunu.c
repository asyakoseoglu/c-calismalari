#include <stdio.h>
#include <stdlib.h> /*srand ve rand fonksiyonları için kullanılan başlık dosyası*/
#include <time.h> /*time fonksiyonu için kullanılan başlık dosyası*/

int main() {
   /*rastgele sayı seçmek zamana bağlı rand fonksiyonuna random sayı ürettiren
   srand(time(0)) fonksiyonu kullanılır.*/
    srand(time(0));
    /*gizlisayi değişkenine 1 ile 100 arasında random sayı atanır.*/
    int gizlisayi = rand() % 100 + 1;


    /*5 tahmin hakkı olduğundan 5 döngü boyunca kullanıcıdan sayı istenir ve bu sayı gizlisayi ile karşılaştırılarak 
    kullanıcıya dönüt ekrana yazılır.*/
    int i;
    for (i=1; i<=5; i++ ){
        int tahmin;
        printf("%d. tahmininizi girin.\n", i);
        scanf("%d", &tahmin);

        if (tahmin > gizlisayi)
           printf("Daha kuçuk bir sayi giriniz\n");
        else if (tahmin < gizlisayi)
           printf("Daha buyuk bir sayi giriniz\n");
        else {
           printf("Tebrikler, dogru tahmin ettiniz.");
           /*5 tahmin hakkı bitmeden doğru tahmin yapılması halinde döngüden çıkmak için break kullanılır.*/
           break; }
    }
    
    /*5 tahmin hakkında da gizlisayi bulunamadıysa kullanıcıya bildirilir.*/
    if (i > 5 )
       printf("Tahmin hakkiniz bitti. Gizli sayi: %d.", gizlisayi);
    
    return 0;
}