#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char s1[100], s2[100]; //
    char copy1[100], copy2[100]; //

    printf("ilk stringi giriniz: ");
    scanf("%s", s1);
    printf("ikinci stringi giriniz: ");
    scanf("%s", s2);

    // dizileri küçük harfe çevirmeden önce orijinal halin korunması için diziler kopyalanır. işlemler kopyalar üzerinde yapılacaktır.
    strcpy(copy1, s1);
    strcpy(copy2, s2);

    // dizilerdeki bütün karakterler küçük harfe çevrilir.
    for(int i=0; copy1[i]!='\0'; i++){
        copy1[i] = tolower(copy1[i]);
    }
    for(int i=0; copy2[i]!='\0'; i++){
        copy2[i] = tolower(copy2[i]);
    }

    int kontrol = strcmp(copy1, copy2); // diziler karşılaştırılır.
                                        // diziler aynı ise 0, farklı ise 0'dan farklı bir değer döner.
                                        // s1=s2 ise 0
                                        // s1<s2 ise negatif değer ('a'-'b'= -1)
                                        // s1>s2 ise pozitif değer ('b'-'a'= 1)

    if(kontrol == 0){ // diziler aynı ise:
        printf("stringler birbirine esittir.\n"); 
    }
    else{ // diziler farklı ise:
        printf("stringler birbirine esit degildir.\n");

        if (kontrol < 0){ // ilk dizi alfabetik olarak ikinci diziden önde:
            printf("'%s' stringi alfabetik olarak once gelir.\n", s1);
        }
        else{ // ikinci dizi alfabetik olarak ilk diziden önde:
            printf("'%s' stringi alfabetik olarak once gelir.\n", s2);
        }
    }
    return 0;
}