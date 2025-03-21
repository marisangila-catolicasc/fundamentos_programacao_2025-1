#include "math.h"
#include "stdio.h"

int main(void) {

  int numero1, numero2, soma, subtracao, multiplicacao, divisao, potencia,
      resto;
  printf("Digite o primeiro numero: ");
  scanf("%d", &numero1);

  printf("Digite o segundo numero: ");
  scanf("%d", &numero2);

  soma = numero1 + numero2;

  subtracao = numero1 - numero2;

  multiplicacao = numero1 * numero2;

  divisao = numero1 / numero2;

  resto = numero1 % numero2;

  potencia = pow(numero1, numero2);

  printf("A soma é %d\n", soma);

  printf("A subtracao é %d\n", subtracao);

  printf("A multiplicacao é %d\n", multiplicacao);

  printf("A divisao é %d\n", divisao);

  printf("O primeiro numero elevado pelo  segundo é %d\n", potencia);

  printf("O resto é %d\n", resto);

  return 0;
}
