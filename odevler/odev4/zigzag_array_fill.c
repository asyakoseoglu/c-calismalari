#include <stdio.h>

int main(){
   
    //dizinin uzunluğunu belirlemek için kullanıcıdan eleman sayısı istenir.
    int n;
    printf("kac elemanli bir dizi olusturmak istediginizi giriniz: \n\t");
    scanf("%d", &n);

    //dizi tanımlanır.
    int dizi[n];
    
    // kullanıcıya kaçıncı dizi elemanını gireceğini belirtmek ve elemanların indislerini belirlemek için eleman sayacı tanımlanır.
    int eleman_sayac=1;
   
    for(int i=0; i<n; i++){
        int eleman;
        printf("%d. elemani giriniz: \n\t", eleman_sayac);
        scanf("%d", &eleman);
        

        // eleman_sayac değişkeninin tek veya çift olmasına göre elemanları baştan ve sondan yerleştiren if else bloğu oluşturulur.
        if(eleman_sayac%2!=0)
          dizi[(eleman_sayac+1)/2-1]=eleman; // eleman_sayac tekse elemanları baştan sona doğru yerleştirir. 
                                             /* eleman_sayac=1 [i]=0 
                                                eleman_sayac=3 [i]=1 */     
        else
        dizi[n-eleman_sayac/2]=eleman;       // eleman_sayac çiftse elemanları sondan başa doğru yerleştirir. 
                                             /* eleman_sayac=2 [i]=n-1
                                                eleman_sayac=3 [i]=n-2 */
        eleman_sayac++; // bir sonraki elemanı kullanıcıdan alıp diziye atamak için eleman_sayac 1 arttırılır.
    }

    // oluşturulan dizi ekrana yazıdırılır.
    printf("girilen elemanlarin bir bastan bir sondan siralanmasiyla olusan dizi: {");
   
    for(int i=0; i<n; i++){
        if (i != n-1)
        printf("%d, ", dizi[i]);
        else
        printf("%d}\n", dizi[i]);
    }
 
    return 0;
}