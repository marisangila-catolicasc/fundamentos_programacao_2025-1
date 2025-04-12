#include <stdio.h>

int main() {
  int numeros[10];
  int maior;
  int i;

  for (i = 0; i < 10; i++) {
    printf("Digite seu %d' numero: \n", i + 1);
    scanf("%d", &numeros[i]);
    if (i == 0) {
      maior = numeros[i];
    } else if (numeros[i] > maior) {
      maior = numeros[i];
    }
  }

  printf("O maior entre os numeros e: %d\n", maior);

  return 0;
}