#include <stdio.h>

  int main(void) {
  int num1, num2, potencia;
  printf("Informe dois numeros inteiros:\n ");
  scanf("%d %d", &num1, &num2);
  printf("A soma dos numeros eh: %d\n", num1 + num2);
  printf("A subtracao do primeiro pelo o segundo eh: %d\n", num1 - num2);
  printf("A muiltiplicacao dos numeros eh: %d\n", num1 * num2);
  printf("A divisao do primeiro pelo o segundo eh: %d\n", num1 / num2);
  printf("O resto da divisao do primeiro pelo o segundo eh: %d\n", num1 % num2);
    
  potencia = pow(num1,num2);
    
  printf("O primeiro numero elevado ao segundo eh: %d\n", potencia);
  return 0;
}
