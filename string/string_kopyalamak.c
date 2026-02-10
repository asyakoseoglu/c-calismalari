#include <stdio.h>
#include <string.h>

int main(){
    char metin1[50], metin2[50];
    strcpy(metin1, "algoritma ");
    strcpy(metin2, "ve programlama");

    strcat(metin1, metin2);
    printf(metin1);
    printf("\n");
    return 0;
}