#include <stdio.h>

int main(){
    
    int n; // eleman sayısı
    int i,j; //döngü sayaçları
    int x,aranan; // geçici değer tutan değişken, aranan değer
    
    // kullanıcıdan dizinin eleman sayısı alınır.
    printf("dizinin eleman sayisini giriniz:\n");
    scanf("%d", &n);

    // kullanıcıdan dizinin elemanları alınır ve ekrana yazdırılır.
    int dizi[n],sirali_dizi[n];
    for(i=0;i<n;i++){
        printf("%d. elemani giriniz:\n", i);
        scanf("%d", &dizi[i]);    
    }

    printf("girilen dizi={");
    for(i=0;i<n;i++){
        if(i<n-1)
               printf("%d,", dizi[i]);
            else
               printf("%d}\n", dizi[i]);
    }

    // orijinal dizi korunurken binary search yapılması için sıralı bir dizi oluşturulur.
    for(i=0; i<n; i++){
        sirali_dizi[i]=dizi[i];
    }
    
    for(i=0;i<n;i++){// dizinin her elemanı kendinden sonraki elemanlarla karşılaştırılır.
        for(j=i+1;j<n;j++){
            // i. elemandan küçük bir j. elemanı varsa elemanlar yer değiştirir. 
            // i=0 da en küçük eleman 0 indisine atanır, i=1 de en küçük ikinci eleman 1 indisine atanır...
            if(sirali_dizi[j]<sirali_dizi[i]){    
                x=sirali_dizi[i];
                sirali_dizi[i]=sirali_dizi[j];
                sirali_dizi[j]=x;
            }
        }
    }

    // kullanıcıdan aranan değer istenir
    printf("aranan degeri giriniz:");
    scanf("%d", &aranan);

    // binary search
    int binary_deger=0; // aranan elemanın bulunup bulunmadığının kontrolü için değişken tanımlanır.
    int ilk=0,son=n-1,orta;
    while(ilk<=son){
        orta=(ilk+son)/2;
        if(sirali_dizi[orta]<aranan){
            ilk=orta+1;
        }
        else if(sirali_dizi[orta]==aranan){
            binary_deger=1;
            break;
        }
        else{
            son=orta-1;
        }
    }

    // binary search sonucu aranan eleman bulunduysa o elemanın orijinal dizideki indisi bulunur ve ekrana yazdırılır.
    if(binary_deger==1){
        printf("\n\naranan deger %d-->\n",aranan);
        for(i=0;i<n;i++){
            if(dizi[i]==sirali_dizi[orta]){
                 printf("%d. indiste bulundu.\n", i);
            }
        }
    }
    // binary search sonucu aranan eleman bulunamadıysa ekrana yazdırılır.
    else{
        printf("aranan deger bulunmadi.");
    }

    return 0;
}