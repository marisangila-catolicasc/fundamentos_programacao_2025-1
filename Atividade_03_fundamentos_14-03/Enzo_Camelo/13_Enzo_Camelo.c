#include <stdio.h>

int main(void) {
  int a, b, trocador;
  printf("Digite o valor de A:\n");
  scanf("%d", &a);

  printf("Digite o valor de B:\n");
  scanf("%d", &b);

  trocador = a;
  a = b;
  b = trocador;

  printf("Agora o valor de A = %d e o valor de B = %d\n", a, b);
  return 0;
}
