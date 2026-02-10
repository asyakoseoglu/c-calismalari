#include <stdio.h>

int main(){
    char dizi[50];
    int i;
    printf("metni gir:");
    gets(dizi);

    printf("girilen metni tek tek yazdir:");
    for(i=0;i<=dizi[i];i++){
        printf("%c\n",dizi[i]);
    }

    printf("tum karakterleri yazdir:");
    printf(dizi);
    printf("\n");
    return 0;
}