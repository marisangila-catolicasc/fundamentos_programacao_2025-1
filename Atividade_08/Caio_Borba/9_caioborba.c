#include <stdio.h>
int main() {
  int numeros[5], numerosB[5], numerosC[10];
  int i = 0;
  for (i = 0; i < 5; i++) {
    printf("Digite 1 numero para lista A: ");
    scanf("%d", &numeros[i]);
  }
  for (i = 0; i < 5; i++) {
    printf("Digite 1 numero para lista B: ");
    scanf("%d", &numerosB[i]);
  }
  for (int i = 0, ia = 0; i < 5; i++) {
    numerosC[ia++] = numeros[i];
    numerosC[ia++] = numerosB[i];
  }
  for (int i = 0; i < 10; i++) {
    printf("%d ", numerosC[i]);
  }

  return 0;
}