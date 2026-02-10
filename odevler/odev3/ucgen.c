#include <stdio.h>

int main() {
    /*satır, yıldız ve boşluk döngüleri için değişkenler tanımlanır.*/
    int i,j,a;
    
    /*25 satırlık şekil için 25 kez dönecek döngü*/
    for(i=0; i < 25; i++ ){
       /*yıldızları ortalamak için toplam satır sayısından bulunulan satırın numarası çıkarılır. 
       fark kadar boşluk bırakılır.*/
       for(a=1; a < 25-i ; a++){
        printf(" ");
       }
       /*yıldız sayısı için döngü. her satırda o satırın numarasının 2 katının 1 eksiği kadar yıldız yazdırılmalıdır.*/
       for(j=1; j<=2*i+1; j++){
        printf("*");
       }
       /*yeterli sayıda boşluk ve yıldız yazdırıldıktan sonra bir alt satıra geçilir.*/
       printf("\n");
    }
    return 0;
}


