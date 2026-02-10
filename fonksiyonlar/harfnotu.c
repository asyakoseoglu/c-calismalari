#include <stdio.h>

char notu_harfe_donustur(int not); //prototip

int main(){
    printf("not: 75, harf: %c\n", notu_harfe_donustur(75));
    printf("not: 56, harf: %c\n", notu_harfe_donustur(56));
    return 0;
}

char notu_harfe_donustur(int not){
    if(not>=0&&not<50)  return 'F';
    if(not>=50&&not<70) return 'D';
    if(not>=70&&not<80) return 'C';
    if(not>=80&&not<90) return 'B';
    if(not>=90)         return 'A';
}