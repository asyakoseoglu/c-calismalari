#include <stdio.h>

int main(){

    int dizi[100];

    for(int i=0; i<100; i++){
        dizi[i] = i*2;
    }

    int aranan;
    printf("aranacak degeri giriniz: ");
    scanf("%d", &aranan);

    int deger = -1;
    for(int i=0; i<100; i++){
        if (dizi[i]==aranan){
            deger = i;
        }
    }
    
    if(deger!=-1){
        printf("aranan deger : %d. --> %d. indiste bulundu.", aranan, deger);
    }
    else printf("aranan deger bulunamadi.");

    return 0;
}