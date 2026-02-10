#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

    srand(time(NULL));
    char islem;
    int i,j;
    
    // yapılacak işlemin seçilmesi için menü oluşturulur ve ekrana yazdırılır.
    printf("a --> Tek boyutlu iki diziyi toplama.\nb --> İki boyutlu iki diziyi toplama.\n");
    // kullanıcıdan yapmak istediği işlem alınır.
    printf("Yapmak istediginiz islemi giriniz: ");
    scanf(" %c", &islem);

    // kullanıcı "a" işlemini yapmak istediyse:
    if( islem == 'a'){
        printf("\n\t\t\tTEK BOYUTLU İKİ DİZİNİN TOPLANMASI\n\n");

        // 5 elemanlı tek boyutlu iki dizi ve toplam dizisi tanımlanır.
        int A[5],B[5],C[5];

        // kullanıcıdan dizi elemanları istenir, diziler oluşturulur ve ekrana yazdırılır.
        printf(" 5 elemanli A matrisini giriniz:\n");
        for(i=0;i<5;i++){
            printf("%d. elemani giriniz: ",i);
            scanf("%d", &A[i]);
        }
        printf(" 5 elemanli B matrisini giriniz:\n");
        for(i=0;i<5;i++){
            printf("%d. elemani giriniz: ",i);
            scanf("%d", &B[i]);
        }
        printf("\nA={");
        for(i=0;i<5;i++){
            if(i<4)
               printf("%d,", A[i]);
            else
               printf("%d}", A[i]);
        }
        printf("\nB={");
        for(i=0;i<5;i++){
            if(i<4)
               printf("%d,", B[i]);
            else
               printf("%d}", B[i]);
        }


        // diziler toplanır ve ekrana yazdırılır.
        printf("\n\nDİZİLERİN TOPLAMI C={");
        for(i=0;i<5;i++){
            C[i]=A[i]+B[i];
            if(i<4)
               printf("%d,", C[i]);
            else
               printf("%d}", C[i]);
        }
    }

    // kullanıcı "b" işlemini yapmak istediyse:
    if( islem =='b'){
        printf("\n\t\t\tİKİ BOYUTLU İKİ DİZİNİN TOPLANMASI\n\n");

        // iki boyu iki dizi ve toplam matrisi tanımlanır.
        int X[2][2], Y[2][2], Z[2][2];
        
        // dizilere random eleman atanır.
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                X[i][j]=rand()%(139)+12;
            }
        }
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                Y[i][j]=rand()%(139)+12;
            }
        }
        
        // diziler ekrana yazdırılır.
        printf("X Matrisi=\n");
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                printf("%4d", X[i][j]);
            }
            printf("\n");
        }

        printf("Y Matrisi=\n");
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                printf("%4d", Y[i][j]);
            }
            printf("\n");
        }

        // diziler toplanır ve Z matrisine atanır.
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                Z[i][j]=X[i][j]+Y[i][j];
            }
        }
        
        // Z matrisi ekrana yazdırılır.
        printf("MATRİSLERİN TOPLAMI=\n");
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                printf("%4d", Z[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}