#include <stdio.h>
int checkPrime(int n);
int main(){
    int n, i, flag = 0;
    printf("Deger giriniz…..: ");
    scanf("%d", &n);

    for(i=2;i<=n/2;i++){
        if (checkPrime(i) == 1){
            if (checkPrime(n-i) == 1){
                printf("%d + %d = %d\n", i, n-i, n);
                flag = 1;
            }
        }
    }
    if (flag == 0){
        printf("%d sayisi iki asal sayinin toplami olarak ifade edilemez.\n", n);
    }
    return 0;
}
int checkPrime(int n){
    int i,isPrime=1;

    if(n<=1){
        return 0;
    }
    
    for(i=2; i<=n/2; i++){
        if(n%i==0){
            isPrime=0;
            break;
        }
    }
    return isPrime;    
}