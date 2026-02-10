#include <stdio.h>

void kutu_ciz(int satir, int sutun);

int main(){
    kutu_ciz(10,30);
    return 0;
}

void kutu_ciz(int satir, int sutun){
    int j;
    for( ; satir>0 ; satir--){
        for (j=sutun; j>0 ; j--){
            printf("*");
        }
        printf("\n");
    }
}