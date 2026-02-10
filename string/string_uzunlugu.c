#include <stdio.h>
#include <string.h>

int main(){
    char dizi[50];
    int i;
    printf("metni gir:");
    gets(dizi);
    printf(dizi);

    printf("uzunluk:%d", strlen(dizi));
    printf("\n");
    return 0;
}