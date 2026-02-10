#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));
    int i,j,k,x;
    int dizi[10];
    int rakam_top, bolen_top, sayi, temp, uyumluCift_sayac=0;
    
    // 10 elemanlı diziye rastgele elemanlar atanır. dizi ekrana yazdırılır.
    for(i=0; i<10; i++){
        dizi[i]=rand()%49+2;
    }

    printf("olusan dizi A={");
    for(i=0;i<10;i++){
        if(i<9)
            printf("%d,", dizi[i]);
        else
            printf("%d}\n", dizi[i]);
    }

    // tur sayısını kontrol eden döngü
    for(i=0;i<10;i++){
        
        // ilk sayının rakamları toplamı:
        rakam_top=0;
        sayi = dizi[0];
        while(sayi>0){
            rakam_top += sayi%10;
            sayi = sayi/10;
        }

        // ikinci sayı için döngü
        for(j=1;j<10;j++){
            bolen_top=0;
            // ikinci sayının kendisi hariç bölenleri toplamı:
            for(x=1;x<dizi[j];x++){
                if(dizi[j]%x==0){
                    bolen_top += x;
                }
            }
            // ilk sayının rakamları toplamı ile ikinci sayinin bölenleri toplamı eşitse uyumlu çift olarak ekrana yazdırılır.
           if(rakam_top==bolen_top){
                printf("%d ve %d sayilari uyumlu cifttir.\n", dizi[0], dizi[j]);
                uyumluCift_sayac++; // dizide uyumlu çift bulunup bulunmadığının kontrolü için sayac tanımlanır, varsa sayac arttırılır.
            }  
        }

        // her turda ilk elemanla işlem yapılacaktır. dizinin ilk elemanın değişmesi için ilk eleman sona atılarak dizi sola kaydırılır.
        temp = dizi[0]; // ilk eleman geçici olarak bir değişkende tutulur.
        for(k=0; k<9; k++){ // döngüyle ilk eleman dışındakiler sola kaydırılır.
            dizi[k]=dizi[k+1];
        }
        dizi[9] = temp; // son elemana baştaki ilk elemana atanır. sola kaydırma işlemi tamamlanmış olur.
    }

    // eğer dizide uyumlu çift yoksa sayac hiç artmamıştır. Durum ekrana yazdırılır.
    if(uyumluCift_sayac==0){
        printf("dizide uyumlu cift yoktur.");
    }
    
    return 0;
}