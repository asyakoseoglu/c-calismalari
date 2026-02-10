#include <stdio.h>

int main(){
    int a[2][3]={4,5,9,8,19,7}, b[2][3]={9,7,12,45,8,3};
    
    
    printf("A matrisi: \n");
    for(int i=0;i<2;i++){
        
        for(int j=0;j<3;j++){
            printf("%4d", a[i][j]);
        }
        
        printf("\n");
    }
    
    printf("B matrisi: \n");
    for(int i=0;i<2;i++){
        
        for(int j=0;j<3;j++){
            printf("%4d", b[i][j]);
        }
        
        printf("\n");
    }

    printf("C matrisi: \n");
    for(int i=0;i<2;i++){
        
        for(int j=0;j<3;j++){
            printf("%4d", a[i][j]+b[i][j]);
        }
        
        printf("\n");
    }
    return 0;
}