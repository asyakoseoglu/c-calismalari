#include <stdio.h>

int main() {
    
    // --- Başlıkları Hizalama ---
    printf("--------------------------------------------\n");
    // %-20s: 20 karakter sola yaslı (metin)
    // %10s:  10 karakter sağa yaslı (metin)
    printf("| %-20s | %-10s | %-s|\n", "URUN ADI", "FIYAT (TL)", "STOK");
    printf("--------------------------------------------\n");

    // --- Verileri Hizalama ---
    
    // URUN ADI (%-20s): Sola yaslı
    // FIYAT    (%10.2f): Toplam 10 karakter alanda sağa yaslı, virgülden sonra 2 basamak
    // STOK     (%4d):    4 karakter alanda sağa yaslı (tamsayı)
    
    printf("| %-20s | %-10.2f | %-4d|\n", "Laptop", 14999.50, 15);
    printf("| %-20s | %-10.2f | %-4d|\n", "Monitor (27 Inc)", 4500.00, 8);
    printf("| %-20s | %-10.2f | %-4d|\n", "Klavye", 750.75, 52);
    
    printf("--------------------------------------------\n");
    
    return 0;
}