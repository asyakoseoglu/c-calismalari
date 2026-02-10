#include <stdio.h>

void mesaj();
void mesaj2();

int main(){
    mesaj();
    printf(" hos geldiniz\n");
    return 0;
}

void mesaj(){
    printf("algoritma");
    mesaj2();
}

void mesaj2(){
    printf(" ve programlama");
}