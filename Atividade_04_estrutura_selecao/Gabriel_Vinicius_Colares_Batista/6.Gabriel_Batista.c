#include <stdio.h>

int main() {
  int maior, n1, n2, n3;
  // recomendo compilar
  printf("Digite o primeiro numero: ");
  scanf("%d", &n1);
  printf("Digite o segundo numero: ");
  scanf("%d", &n2);
  printf("Digite o terceiro numero: ");
  scanf("%d", &n3);

  maior = n1;

  if (n2 > maior) {
    maior = n2;
    printf("O maior numero é n2: %d\n", maior);
  } else if (n3 > maior) {
    maior = n3;
    printf("O maior numero é n3: %d\n", maior);
  } else {
    printf("O maior numero é n1: %d\n", maior);
  }
  return 0;
}
