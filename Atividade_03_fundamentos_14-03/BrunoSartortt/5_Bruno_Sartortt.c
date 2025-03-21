#include <stdio.h>

int main(void) {
    int x, y;
    float resultado;

    printf("Diga um número:\n");
  scanf("%d", &x);
    printf("Digite outro numero:\n");
  scanf("%d", &y);
  resultado = x + y;
     printf("O resultado é: %f\n", resultado);

  return 0;
}