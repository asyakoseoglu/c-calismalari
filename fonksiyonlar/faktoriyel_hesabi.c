#include <stdio.h>

int faktoriyel_hesapla(int sayi);

int main(){
    
    int sayi;
    printf("faktoriyel hesabi icin sayi giriniz: ");
    scanf("%d", &sayi);

    printf("\nFaktoriyel sonucu: %d \n", faktoriyel_hesapla(sayi));
    return 0;
}

int faktoriyel_hesapla(int sayi){
    if(sayi<=1){
        return 1;
    }
    else{
        return (sayi*faktoriyel_hesapla(sayi-1)); // recursion
    }
}