#include <stdio.h>

int main() {
  int n1, n2;

  printf("Digite um número:\n");
  scanf("%d", &n1);

  printf("Digite mais um número:\n");
  scanf("%d", &n2);

  while (n1 != n2) {
    if (n1 < n2) {
      n1++;
    } else {
      n1--;
    }
    printf("O número está diferente: %d\n", n1);
  }

  printf("E agora, o primeiro número é igual o segundo: %d\n", n1);

  return 0;
}