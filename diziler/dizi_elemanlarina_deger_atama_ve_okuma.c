#include <stdio.h>

int main () {
    
    int dizi[5];

    for(int i=0; i<5; i++){
        dizi[i]=i*3;
    }

    for(int i=0; i<5; i++){
        printf("%d. dizi elemani, dizinin %d. elemani: %d\n", i, i+1, dizi[i]);
    }

    return 0;
}