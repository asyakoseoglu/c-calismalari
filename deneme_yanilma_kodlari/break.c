 #include <conio.h>
 #include <stdio.h>
 int main ()
 {
 int i, sayi=28, x=3;
 for(i=13; i>0; i=i-2) {
 if(sayi%i == 0) break;
 x = x+ i;
 }
 printf("%d", x);
 }