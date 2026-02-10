#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int a = 2, b = 10, c = 50;
    float f = 1.05, g = 25.5, h = -0.1, yuzde;

    printf("3 tamsayi : %d %d %d\n", a, b, c);
    printf("3 tamsayi [TAB] : %d \t%d  \t%d\n", a, b, c);

    printf("\n");

    printf("3 reel sayi (yanyana) : %f %f %f\n", f, g, h);
    printf("3 reel sayi (altalta) : \n%f\n%f\n%f\n\n", f, g, h);

    yuzde = 220 * 25/100.0;
    printf("220nin %%25 i %f dir\n", yuzde);
    printf("%f/%f isleminin sonucu = %f\n", g, f, g / f);

    return 0;
}