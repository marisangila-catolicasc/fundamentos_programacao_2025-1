#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

float valores[6] = {10, 9.2, 4.5, 2.7, 9.6, 6.5}; 
float media;
float soma = 0.0;
for (int i = 0; i <6; i++) {
   soma += valores[i];
}
media = soma/6;
  printf("A média do vetor dos valores é de: %.2f\n", media);
  return 0;
  
}