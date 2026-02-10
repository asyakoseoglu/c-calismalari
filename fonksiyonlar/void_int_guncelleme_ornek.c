#include <stdio.h>

// Sistemdeki mevcut can (Global değişken)
// 'ı' harfini 'i' yaptık: karakterCani
int karakterCani = 100; 

// 4. Tip Fonksiyon: Değer dönmeyen (void), tam sayı alan (int)
void canGuncelle(int degisimMiktari) {
    // Mevcut canı günceller
    karakterCani = karakterCani + degisimMiktari; 
    
    printf("Can guncellendi! Yeni durum: %d\n", karakterCani);
    // return satırı yok, çünkü void!
}

int main() {
    printf("Oyun basladi. Canin: %d\n", karakterCani);

    // Güncelleme işlemi yapılıyor
    canGuncelle(-20); // Karakter 20 hasar aldı
    canGuncelle(10);  // Karakter küçük bir iksir içti

    return 0;
}