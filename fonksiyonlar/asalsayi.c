#include <stdio.h>

int checkPrime(int n);

int main(){
    int n,i;
    printf("pozitif bir deger giriniz:");
    scanf("%d", &n);

    if (checkPrime(n)==1){
        printf("%d bir asal sayidir.\n", n);
    }
    else{
        printf("%d asal degildir.\n", n);
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