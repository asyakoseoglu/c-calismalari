#include <stdio.h>

int main(){
    
    int n;

    printf("dizinin eleman sayisini giriniz: ");
    scanf("%d", &n);
    
    int dizi[n];
    printf("\ndizi elemanlarini sirali olarak giriniz. \n");
    
    for(int i=0; i<n; i++){
        printf("dizinin %d. elemanini giriniz: ", i);
        scanf("%d", &dizi[i]);
    }

    int aranan;
    printf("aranan degeri giriniz : \n");
    scanf("%d", &aranan);

    int ilk=0, son=n-1, orta=(ilk+son)/2;

    while (ilk<=son){
        if(dizi[orta]<aranan){
            ilk=orta+1;
        }
        else if (dizi[orta]==aranan){
            printf("aranan deger dizinin %d. elemanidir.\n", orta);
            break;
        }
        else son=orta-1;
        orta=(ilk+son)/2;
    }

    if(ilk>son){
        printf("aranan deger bulunamadi.");
    }

    return 0;
}
