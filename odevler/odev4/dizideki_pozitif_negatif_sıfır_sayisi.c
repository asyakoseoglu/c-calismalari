#include <stdio.h>

int main(){
   
    //dizinin uzunluğunu belirlemek için kullanıcıdan eleman sayısı istenir.
    int eleman_sayisi;
    printf("kac elemanli bir dizi olusturmak istediginizi giriniz: \n");
    scanf("%d", &eleman_sayisi);
    
    //dizi tanımlanır.
    int dizi[eleman_sayisi];
    
    //dizinin her elemanı kullanıcıdan istenir.
    for(int i=0; i<eleman_sayisi; i++){
        int eleman;
        printf("%d. elemani giriniz: \n", i+1);
        scanf("%d", &eleman);

        dizi[i]=eleman;
    }
    
    // oluşturulan dizi ekrana yazıdırılır.
    printf("olusturulan dizi: {");
   
    for(int i=0; i<eleman_sayisi; i++){
        if (i != eleman_sayisi-1)
        printf("%d, ", dizi[i]);
        else
        printf("%d}\n", dizi[i]);
    }

    // dizinin her elemanı kontrol edilerek pozitif, negatif ve sıfır sayıyı belirlenir, ekrana yazdırılır.
    int pozitif_sayac=0, negatif_sayac=0, sifir_sayac=0;
   
    for(int i=0; i<eleman_sayisi; i++){
        if (dizi[i]<0)
           negatif_sayac++;
        else if (dizi[i]>0)
           pozitif_sayac++;
        else
           sifir_sayac++;
    }

    printf("dizideki pozitif eleman sayisi: %d\n", pozitif_sayac);
    printf("dizideki negatif eleman sayisi: %d\n", negatif_sayac);
    printf("dizideki sifir sayisi         : %d\n", sifir_sayac);
    
    return 0;

}