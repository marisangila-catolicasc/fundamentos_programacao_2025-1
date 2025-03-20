#include <stdio.h>

int main(void) {
  float numero1, numero2, soma;
  printf("Insira o primeiro número: \n");
  scanf("%f", &numero1);
  printf("Insira o segundo numero: \n");
  scanf("%f", &numero2);

  soma = numero1 + numero2;

  printf("A soma desses dois números é: \n" "%f", soma);
  return 0;
}