#include <stdio.h>
#include <math.h>

float babil(float sayi, float tahmin)
{
    float hatadegeri;

    if (sayi < 0)
        return -1;

    do {
        tahmin = (tahmin + (sayi / tahmin)) / 2;
        hatadegeri = tahmin * tahmin - sayi;
    } while (fabs(hatadegeri) > 0.002);

    return tahmin;
}

int main()
{
    float s, t, kok;

    printf("sayiyi giriniz: ");
    scanf("%f", &s);

    printf("tahmini giriniz: ");
    scanf("%f", &t);

    kok = babil(s, t);

    if (kok == -1)
        printf("Negatif sayilarin karekoku yoktur.\n");
    else
        printf("Karekok: %f\n", kok);

    return 0;
}
