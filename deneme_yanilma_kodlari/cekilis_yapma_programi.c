#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    srand(time(0));
    
    int skatilimci;
    printf("Katilimci sayisini giriniz.\n");
    scanf("%d", &skatilimci);
    
    char isimler[skatilimci][50];
    
    for(int i=0; i<skatilimci; i++){
        printf("%d. katilimciyi giriniz.\n", i+1);
        scanf("%s", isimler[i]);
    }

    char hedefler[skatilimci][50];

    for(int i=0; i<skatilimci; i++){
        strcpy(hedefler[i], isimler[i]);
    }

    int karistir;

    do {
        karistir = 0;

        for (int i=skatilimci-1; i>0; i--){
        int j = rand() % (i+1);
        char temp[50];
        strcpy(temp, hedefler[i]);
        strcpy(hedefler[i], hedefler[j]);
        strcpy(hedefler[j], temp);
        }
        for(int i=0; i<skatilimci; i++){
            if(strcmp(isimler[i], hedefler[i])==0){
                karistir=1;
                break;
            }
        }
    }while(karistir);

    printf("\n     SONUC     \n");
    for (int i=0; i<skatilimci; i++){
        printf("%s --> %s\n", isimler[i], hedefler[i]);
    }
    return 0;
}