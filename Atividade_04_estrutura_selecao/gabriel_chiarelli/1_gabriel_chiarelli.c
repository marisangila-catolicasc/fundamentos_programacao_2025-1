#include <stdlib.h>
#include <stdio.h>

/*
1. Fa¸ca um programa que solicite um n´umero e diga se ele ´e: Positivo ou Negativo.
*/

int main() {
  float num;
  
  printf("Digite um numero: ");
  scanf("%f", &num);
  if (num >= 0){
    printf("O número é positivo ");
  }
  else{
    printf("O número é negativo ");
  }
  printf("%.2f", num);
  return 0;
}
