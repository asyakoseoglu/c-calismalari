#include <stdio.h>
int main()
{

int not = 64;
char *sonuc = (not >= 90) ? "AA" :
              (not >= 80) ? "BA" :
              (not >= 70) ? "BB" : "FF";

printf("Notunuz: %s", sonuc);

return 0;
}