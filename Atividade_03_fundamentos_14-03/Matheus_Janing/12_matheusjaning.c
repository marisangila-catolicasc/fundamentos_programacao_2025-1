#include <stdio.h>
#include <math.h>
int main(void) {
  int n1, n2, resto, multiplicacao, divisao, soma, subtracao, potencia;
  printf("Insira dois numeros inteiros: \n");
  scanf("%d", &n1), scanf("%d", &n2);

  soma = n1 + n2;
  subtracao = n1 - n2;
  multiplicacao = n1 * n2;
  divisao = n1 / n2;
  potencia = pow(n1, n2);
  resto = n1 % n2;
    
  printf("Soma = " "%d\n", soma);
  printf("Subtracao = " "%d\n", subtracao);
  printf("Multiplicacao = " "%d\n", multiplicacao);
  printf("Divisao = " "%d\n", divisao);
  printf("Potencia = " "%d\n", potencia);
  printf("Resto divisao = " "%d\n", resto);
  return 0;
}