#include <stdio.h>
int main() {
    
    int sayi , i;
    int faktoryel=1 ;

    printf("bir sayi giriniz: ");
    scanf("%d", &sayi);

    for (i=1; i<=sayi; i++){
        faktoryel=faktoryel*i;
    }
    
    printf("girilen sayinin faktoryeli: %d", faktoryel);

    return 0;

}