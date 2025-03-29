#include <stdio.h>

int main() {
  int numero; 
  printf("Digite um numero: ");
  scanf("%d", &numero);

  if (numero >= 0) { 
    printf("Seu numero é positivo"); 
  }else{
    printf("Seu numero é negativo");
  }

  return 0;
}
