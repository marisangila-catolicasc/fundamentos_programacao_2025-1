#include <stdio.h>

int main(void) {
  float numero;

  printf("Digite um número para saber se é positivo ou negativo: ");
  scanf("%f", &numero);

  if (numero > 0){
    printf("O número é positivo");
  }else{
    printf("O número é negativo");
  }
  return 0;
}