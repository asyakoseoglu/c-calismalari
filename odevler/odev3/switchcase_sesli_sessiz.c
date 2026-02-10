#include <stdio.h> 

int main () {
    
    char karakter;
    printf("Bir karakter giriniz.\n");
    scanf("%c", &karakter);

    /*girilen karakterin case'lere uyup uymadığı, hangi case'lerin hangi çıktıyı vereceği belirlenir.*/
    switch (karakter) {
        case 'a': case 'A': 
        case 'e': case 'E': 
        case 'i': case 'I': 
        case 'o': case 'O': 
        case 'u': case 'U': 
            printf("Girilen karakter bir alfabedir ve sesli bir harftir.\n");
            /*girilen karakter herhangi bir case'e eşitse bloktan çıkılır.*/
            break;
            
        case 'b': case 'B': 
        case 'c': case 'C': 
        case 'd': case 'D': 
        case 'f': case 'F': 
        case 'g': case 'G': 
        case 'h': case 'H': 
        case 'j': case 'J': 
        case 'k': case 'K': 
        case 'l': case 'L': 
        case 'm': case 'M': 
        case 'n': case 'N': 
        case 'p': case 'P': 
        case 'r': case 'R': 
        case 's': case 'S': 
        case 't': case 'T': 
        case 'v': case 'V': 
        case 'y': case 'Y': 
        case 'z': case 'Z': 
            printf("Girilen karakter bir alfabedir ve sessiz bir harftir.\n");
            break;
        
        /*girilen karakter hiçbir case'e uyamamışsa:*/
        default:
            printf("Girilen karakter bir alfabe degildir.\n");
    }
    return 0;
}