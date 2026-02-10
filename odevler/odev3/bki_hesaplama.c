#include <stdio.h>
int main()
{ 
    printf("Kilonuzu kilogram cinsinden giriniz. \n"); 
    float kilo;
    scanf("%f", &kilo);
    
    printf("Boyunuzu metre cinsinden giriniz.\n");  
    float boy;
    scanf("%f", &boy);

    /*bki değişkenine vücut kütle indeksi formülü atanır.*/
    float bki = kilo / (boy*boy);
    
    /*ideal kilo durumunu belirlemek için gerekli koşullar if else ile kontrol edilir ve uygun çıktı ekrana yazdırılır.*/
    if (bki > 0 && bki < 18.5)
       printf("Vucut kutle indeksiniz: %.2f , İdeal kilo durumunuz: zayif. \n", bki);
    else if (bki >= 18.5 && bki < 24.9)
       printf("Vucut kutle indeksiniz: %.2f , İdeal kilo durumunuz: normal. \n", bki);
    else if (bki >= 25 && bki < 29.9)
       printf("Vucut kutle indeksiniz: %.2f , İdeal kilo durumunuz: fazla kilolu. \n", bki);
    else if (bki >= 30 && bki < 34.9)
       printf("Vucut kutle indeksiniz: %.2f , İdeal kilo durumunuz: I. derece obez. \n", bki);
    else if (bki >= 35 && bki < 39.9)
       printf("Vucut kutle indeksiniz: %.2f , İdeal kilo durumunuz: II. derece obez. \n", bki);
    else if (bki >= 40)
       printf("Vucut kutle indeksiniz: %.2f , İdeal kilo durumunuz: III, derece obez. \n", bki);
    return 0;
}