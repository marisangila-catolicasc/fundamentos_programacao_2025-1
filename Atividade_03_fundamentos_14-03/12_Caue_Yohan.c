#include <stdio.h>
#include <math.h>

int main(void) {
  int n1, n2, soma, subtracao, multiplicacao, potencia;
  float divisao, resto;
  printf("Insira o primeiro dígito:\n");
  scanf("%d", &n1);
  printf("Insira o segundo dígito:\n");
  scanf("%d", &n2);

  soma = n1 + n2;
  subtracao = n1 - n2;
  multiplicacao = n1 * n2;
  divisao = n1 / n2;
  potencia = pow(n1, n2);
  resto = n1 % n2;

  printf("A soma dos números é: %d\n", soma);
  printf("A subtração dos números é: %d\n", subtracao);
  printf("A multiplicação dos números é: %d\n", multiplicacao);  
  printf("A divisão dos números é: %f\n", divisao);
  printf("A potência dos números é: %d\n", potencia);
  printf("O resto dos números é: %f\n", resto);
  
  
  return 0;
}
