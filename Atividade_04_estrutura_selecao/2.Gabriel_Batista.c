#include <stdio.h>

int main(void) {
  int numero;

  printf("Digite um número para saber se é par ou ímpar: ");
  scanf("%d", &numero);

  if (numero % 2 == 0){
    printf("O número %d é par", numero);
  }else{
    printf("O número %d é ímpar", numero);
  }
  
  return 0;
}