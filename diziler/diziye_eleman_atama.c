#include <stdio.h>

int main(){
    
    int dizi[10];
    int i,j;
    
    for(i=0; i<10; i++){
        printf("%d. dizi elemanini giriniz: ",i);
        scanf("%d", &dizi[i]);
        printf("\n");

        if(dizi[i]==0)
          break;

        j=i;
    }

    
    printf("olusturulan dizi: {");
   
    for(int i=0; i<=j; i++){
        if (i != j)
        printf("%d, ", dizi[i]);
        else
        printf("%d}\n", dizi[i]);
    }

    return 0; 
}