#include <stdio.h>

int main() {
    
    int n;
    printf("sekil kac satirdan olussun ?\n");
    scanf("%d", &n);
    
    // sola yaslanmıs ucgen //
    printf("\n\n\n");
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }

    // piramit //
    printf("\n\n\n");
    for(int i=1; i<=n; i++){
        for(int k=1; k<=n-i; k++){
            printf(" ");
        }
        for(int j=1; j<=2*i-1; j++){
            printf("*");
        }  
        printf("\n");
    }

    // ters piramit //
    printf("\n\n\n");
    for(int i=n; i>=1; i--){
        for(int k=n-i; k>=1; k--){
            printf(" ");
        }
        for(int j=1; j<=2*i-1; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}