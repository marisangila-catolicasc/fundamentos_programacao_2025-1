#include "stdio.h"
#include "math.h"

int main(void) {
  int num1, num2, soma, mult, div, pot, resto; 
  printf("Insira o primeiro número: \n");
  scanf("%d", &num1);
  printf("Insira o segundo número: \n");
  scanf("%d", &num2);

  soma = num1 + num2;
  mult = num1 * num2;
  div = num1 / num2;
  pot = pow(num1, num2);
  resto = num1 % num2;
  
  printf("A soma dos números é: %d \n", soma);
  printf("A multiplicação dos números é: %d \n", mult);
  printf("A divisão dos números é: %d \n", div);
  printf("A potência dos números é: %d \n", pot);
  printf("O resto da divisão dos números é: %d \n", resto);
  
  return 0;
}
