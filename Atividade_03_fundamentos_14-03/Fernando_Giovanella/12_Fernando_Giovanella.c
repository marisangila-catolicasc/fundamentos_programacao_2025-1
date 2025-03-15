#include <stdio.h>
#include <math.h>

int main(void) {

  int N1, N2;

  printf("Informe um numero: \n");
  scanf("%d", &N1);
  
  printf("Informe outro numero: \n");
  scanf("%d", &N2);

  printf("A soma dos numeros e: %d \n", N1 + N2);
  printf("A subtração do pimeiro numero pelo segundo é: %d", N1 - N2);
  printf("A multiplicação é: %d \n", N1 * N2);
  printf("A divisao do primeiro pelo segundo é: %d \n", N1 / N2);
  printf("O primeiro numero elevado ao segundo numero é: %d \n", pow(N1, N2));
  printf("O resto da divisao do primeiro pelo segundo é: %d \n", N1 % N2);
  
  return 0;
}