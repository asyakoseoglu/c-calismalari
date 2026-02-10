#include <stdio.h>

int main(){
    
    int i,j;
    int x[3][4]={11,34,42,60,
                 72,99,10,50,
                 80,66,21,28};
    for(i=0;i<3;i++){
        
        for(j=0;j<4;j++){
            printf("%4d", x[i][j]);
        }
        
        printf("\n");
    }

    return 0;
}