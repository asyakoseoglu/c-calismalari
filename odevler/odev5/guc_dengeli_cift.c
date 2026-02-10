#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int A[7][10],originalA[7][10],B[7];
    int i,j,k,x,tur,maxGun,maxRakam,bolensayac,temp;

    // Günleri ve ölçümleri tutan diziye random değerler atanır. Ekrana yazdırılır.
    for(i=0;i<7;i++){
        for(j=0;j<10;j++){
            
            A[i][j]=rand()%100+1;
            originalA[i][j]=A[i][j]; /* Dizide uyumlu çift aranırken dizi sola kaydırılacaktır. 
                                      En çok çift içeren günün çiftleri tekrar aranıp yazdırılacağından
                                      orijinal dizi başka bir dizide tutulur.*/
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }

    // Her günde kaç çift olduğunu tutacak dizi oluşturulur, tüm elemanlarına o gün çift yokmuş gibi 0 atanır.
    for(i=0;i<7;i++){
        B[i]=0;
    }

    // Uyumlu çift araması:
    for(i=0;i<7;i++){ // Her gün için döngü
        for(tur=0;tur<10;tur++){ // Her günün asıl ilk ölçümü ve sola döndükten sonraki her ilk ölçüm için arama yapılmasını sağlayan döngü
           
            // ilk sayının en büyük rakamı hesaplanır.
            x=A[i][0]; // Sayının en büyük rakamı hesaplanırken sayı ona bölünür. Dizi elemanlarının değişmemesi için ilk ölçüm bir değişkene atanır.
            maxRakam=-1; // if içindeki koşul için maxRakam değişkenine bir değer atanır.
            while(x>0){              
                if(x%10>maxRakam){ // Sayı 10'a bölünür ve son basamağı elde edilir. Eğer maxRakam'dan büyükse maxRakam olarak atanır*/
                    maxRakam=x%10; 
                } 
                x=x/10; /* Sayının diğer basamaklarının kontrolü için sayı 10'a bölünür. 
                        İnteger bölmesi yapıldığı için sadece tam kısım yeni sayı olur. Sayı 0'dan küçük olana kadar bütün rakamlar kontrol edilir.*/
            }
            // İkinci sayının kendisi hariç bölen sayısı hesaplanır.
            for(j=1;j<10;j++){ // İkinci sayı için döngü
                bolensayac=0;
                for(k=1;k<A[i][j];k++){
                    if(A[i][j]%k==0){ // Sayı k'ya tam bölünüyorsa sayac bir arttırılır.
                        bolensayac++;
                    }
                }

                // Eğer ilk sayının en büyük rakamı ile ikinci sayının kendisi hariç bölen sayısı eşitse o iki sayı güç dengeli çifttir.
                if(maxRakam==bolensayac){
                   B[i]++; // Her günde kaç tane güç dengeli sayi çifti olduğunu tutan sayac o gün için bir artar.
                } 
            }
            // Her turda ilk elemanla işlem yapılacaktır. dizinin ilk elemanın değişmesi için ilk eleman sona atılarak dizi sola kaydırılır.
            temp=A[i][0]; // İlk eleman geçici olarak bir değişkende tutulur
            for(k=0;k<9;k++){ // Döngüyle ilk eleman dışındakiler sola kaydırılır.
                A[i][k]=A[i][k+1];
            }
            A[i][9]=temp; // Son elemana baştaki ilk elemana atanır. Sola kaydırma işlemi tamamlanmış olur.
        }
    }

    // En çok çift içeren günün kaç çift içerdiği belirlenir.
    maxGun=0;
    for(i=0;i<7;i++){
        if(B[i]>maxGun){
            maxGun=B[i];
        }
    }
    // Eğer hiç çift yoksa maxGun değişkeni hiç değişmemiştir. Ekrana dizide hiç çift olmadığı yazdırılır.
    if(maxGun==0){
        printf("guc dengeli dizi cifti bulunamamistir.");
    }
    else{
        
        // Eğer maxGun değişkeni değiştiyse dizide çift var demektir. Hangi günde kaç çift olduğu ekrana yazdırılır.
        printf("\n");
        for(i=0;i<7;i++){
            if(B[i]!=0){ // Eğer o günde çift yoksa ekrana yazdırılmaz.
                printf("%d. gun %d adet guc dengeli sayi cifti icerir.\n", i+1, B[i]);
            }
        }
        
        printf("\nen cok guc dengeli sayi cifti iceren gun veya gunler:\n");
        for(i=0;i<7;i++){
            if(B[i]==maxGun){ // En fazla çift içeren gün veya gunler belirlenir.
            
                printf("\n%2d. gun\n",i+1);
                // güç dengeli çiftler daha önce yapıldığı gibi tekrar belirlenip ekrana yazdırılır.
                for(tur=0;tur<10;tur++){
                    x=originalA[i][0];
                    maxRakam=-1;
                    while(x>0){
                        if(x%10>maxRakam){
                            maxRakam=x%10;
                        }
                        x=x/10;
                    }
                    for(j=1;j<10;j++){
                        bolensayac=0;
                        for(k=1;k<originalA[i][j];k++){
                            if(originalA[i][j]%k==0){
                                bolensayac++;
                            }
                        }
                        if(maxRakam==bolensayac){
                           printf("(%d,%d)\n", originalA[i][0], originalA[i][j]);
                        }
                    }

                    temp=originalA[i][0];
                    for(k=0;k<9;k++){
                        originalA[i][k]=originalA[i][k+1];
                    }
                    originalA[i][9]=temp;
                }
            }
        }
    }
}