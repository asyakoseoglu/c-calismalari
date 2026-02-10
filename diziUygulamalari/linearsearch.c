#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int a[100];
    int i, aranandeger, deger=-1;

    for(i=0; i<100; i++){
        a[i]=i*2;
    }

    printf("aranacak degeri giriniz: ");
    scanf("%d", &aranandeger);

    for(i=0; i<100; i++){
        if (a[i]==aranandeger){
            printf("\naranan deger %d, %d. indiste bulundu.", aranandeger, i);
            deger=i;
            break;
        }
    }

    if(deger==-1){
        printf("\naranan deger bulunamadi.");
    }

    return 0;
}