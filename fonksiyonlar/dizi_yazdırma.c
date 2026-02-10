#include <stdio.h>

void dizi_yaz(float x[], int n);

int main(){
    float dizi[5] = {1.124, 2.787, 3.378, 4.454, 5.57};
    dizi_yaz(dizi, 5);
    return 0;
}

void dizi_yaz(float x[], int n){
    int i;
    for(i=0; i<n; i++){
        printf("%.2f\n", x[i]);
    }
    printf("\n");
}