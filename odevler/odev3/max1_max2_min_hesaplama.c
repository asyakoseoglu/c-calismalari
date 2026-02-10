#include <stdio.h> 

int main() 
{
    int ilksayi;
    printf("1. sayiyi giriniz.\n\t");
    /*Programda sayılar birbirleriyle karşılaştırılacığı için bir ilk sayı istenir.*/
    scanf("%d", &ilksayi); 

    /*karlışatırmaların yapılması için istenen sayı türlerinin hepsine girilen ilk sayı atanır.*/
    int sayac, enBuyuk = ilksayi, enBuyukIkinci = ilksayi, enKucuk = ilksayi;
    /*kullanıcıdan 10 sayı istemek için for döngüsü başlatılır. i=2 dir çünkü ilk sayı daha önce alınmıştır.*/
    for (sayac=2; sayac<=10; sayac++){
        /*yeni sayılar istenir.*/
        int yeniSayi;
        printf("%d. sayiyi giriniz.\n\t", sayac);
        scanf("%d", &yeniSayi);

        /*yeni girilen sayı istenen sayı türleri için atanmış sayılarla karşılaştırılır ve aranan sayı türleri belirlenir*/
        if (yeniSayi>enBuyuk)
           enBuyukIkinci=enBuyuk , enBuyuk=yeniSayi;
        else if (yeniSayi>enBuyukIkinci)
            enBuyukIkinci=yeniSayi;
        if (yeniSayi<enKucuk)
            enKucuk=yeniSayi;

    }
    /*belirlenen sayı türleri yazdırılır.*/
    printf("Girilen en buyuk sayi: %d\n", enBuyuk);
    printf("Girilen en buyuk ikinci sayi: %d\n", enBuyukIkinci);
    printf("Girilen en kucuk sayi: %d\n", enKucuk);

    return 0;

}