#include <stdio.h>
#include <math.h>

int main() {
  int n1, n2;
  float r1, r2, r3, r4, r5, r6;

  printf("Digite o primeiro numero: \n");
  scanf("%d", &n1);
  printf("Digite um segundo numero: \n");
  scanf("%d", &n2);

  r1 = n1 + n2;
  printf("A soma dos dois numero eh: %f\n", r1);
  r2 = n1 - n2;
  printf("A subtracao dos dois numero eh: %f\n", r2);
  r3 = n1 * n2;
  printf("A multiplicacao dos dois numeros eh: %f\n", r3);
  r4 = n1 / n2;
  printf("A divisao dos dois numeros eh: %f\n", r4);
  r5 = pow(n1, n2);
  printf("A potencia dos dois numeros eh: %f\n", r5);
  r6 = n1 % n2;
  printf("O resto da divisao dos dois numero eh: %f\n", r6);
  
  return 0;
}