#include <stdio.h>

int main(){
    int a[3][3]={5,7,9,0,3,0,7,5,1}, b[3][3]={3,3,1,2,1,3,1,0,0};
    int c[3][3];

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            int toplam=0;
            for(int k=0; k<3; k++){
                toplam += a[i][k]*b[k][j];
            }
            printf("%5d", toplam);
        }
        printf("\n");
    }
}