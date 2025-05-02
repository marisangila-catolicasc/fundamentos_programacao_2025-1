#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

int numeros[6] = {78, 92, 44, 24, 49, 68}; 
int maior = -99;
int menor = 99;
for (int i = 1; i <6; i++) {
   if (numeros[i] > maior){
     maior = numeros[i];
   }
   if (numeros[i] < menor){
     menor = numeros[i];
   }
}
   printf("O maior numero é: %d\n", maior);
   printf("O menor numero é: %d\n", menor);
   return 0;
}