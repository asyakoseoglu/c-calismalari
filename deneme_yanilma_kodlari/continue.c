#include <stdio.h>
int main() {
int i = 0;
for (;;) {          // Sonsuz döngü başlar
    i++;            // 1. ADIM: i artırılır
    if (i == 2) continue; // 2. ADIM: i 2 ise atla
    if (i == 4) break;    // 3. ADIM: i 4 ise çık
    printf("%d", i);      // 4. ADIM: Yazdır
    printf("slaka");} 
return 0;
}
