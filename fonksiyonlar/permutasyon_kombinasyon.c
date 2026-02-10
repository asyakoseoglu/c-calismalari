#include <stdio.h>

long int fact(int x);

int main()
{
    int n, r;
    long int npr,ncr;

    printf("n ve r degerlerini giriniz (n > r): ");
    scanf("%d%d", &n, &r);

    if (n <= r) {
        printf("Hata: n, r'den buyuk olmalidir.\n");
        return 0;
    }

    npr = fact(n) / fact(n - r);
    ncr = npr / fact(r);
    printf("Permutasyon = %ld\n", npr);
    printf("Kombinasyon = %ld\n", ncr);

    return 0;
}

long int fact(int x)
{
    long int f = 1;
    int i;

    for (i = 1; i <= x; i++)
        f *= i;

    return f;
}
