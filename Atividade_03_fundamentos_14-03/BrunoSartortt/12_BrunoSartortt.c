#include <stdio.h>
#include <math.h>

  int main(void) {
  int n1, n2, p;
    
  printf("Informe dois numeros inteiros:\n ");
scanf("%d %d", &n1, &n2);
    
  printf("A soma é: %d\n", n1 + n2);
  printf("A subtracao é: %d\n", n1 - n2);
  printf("A muiltiplicacao é: %d\n", n1 * n2);
  printf("A divisao é: %d\n", n1 / n2);
  printf("O resto da divisao é: %d\n", n1 % n2);

  p = pow(n1,n2);

  printf("O primeiro numero elevado ao segundo eh: %d\n", p);
    
  return 0;
}