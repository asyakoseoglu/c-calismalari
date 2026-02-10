#include <stdio.h>
#include <string.h>

int main() {
    
    char metin1[50], metin2[50];

    printf("1.metni giriniz:");
    gets(metin1);
    printf("2.metni giriniz:");
    gets(metin2);

    strcat(metin1, metin2);
    printf("Birlesik metin:%s\n", metin1);
    return 0;
}