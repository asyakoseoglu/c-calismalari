#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int a[100];
    int i, aranandeger, deger=-1, ilk=0, son=100-1, orta=(ilk+son)/2;

    for(i=0; i<100; i++){
        a[i]=i*2;
    }

    printf("aranacak degeri giriniz: ");
    scanf("%d", &aranandeger);

    while (ilk<=son){
        
        orta=(ilk+son)/2;
        
        if(a[orta]<aranandeger){
            ilk=orta+1;
        }
        else if (a[orta]==aranandeger){
            printf("aranan deger dizinin %d. elemanidir.\n", orta);
            break;
        }
        else son=orta-1;
    }

    if(ilk>son){
        printf("aranan deger bulunamadi.");
    }

    return 0;

}