#include <stdio.h>

int main(){
    int a[2][3]={5,3,7,0,1,2};
    int b[2][3]={1,2,3,4,5,6};

    int i,j, c[2][3];

    printf(" A matrisi: \n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }

    printf("\n B matrisi: \n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%3d", b[i][j]);
        }
        printf("\n");
    }

    printf("\n Matrislerin Toplami: \n");
        for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            c[i][j]=a[i][j]+b[i][j];
            printf("%3d", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}