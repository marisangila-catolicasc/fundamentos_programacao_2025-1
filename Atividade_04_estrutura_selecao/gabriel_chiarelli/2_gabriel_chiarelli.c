#include <stdlib.h>
#include <stdio.h>

/*
2. Fa¸ca um programa que solicite um n´umero e diga se ele ´e: Par ou ´ımpar
*/

int main() {
  int num;
  printf("Digite um numero: ");
  
  scanf("%d", &num);
  
  if (num % 2 == 0){
    printf("O numero %d e par", num);
  }else{
    printf("O numero %d e impar", num);
  }
  
  return 0;
}
