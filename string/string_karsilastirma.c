#include <stdio.h>
#include <string.h>

int main(){
    char metin1[50], metin2[50];
    strcpy(metin1, "algoritma ");
    strcpy(metin2, "ve programlama");

    if(strcmp(metin1, metin2)){ // 0 sa aynı 1 se farklı.
        printf("Metinler farkli.\n");
    } else {
        printf("Metinler ayni.\n");
    }

    return 0;
}