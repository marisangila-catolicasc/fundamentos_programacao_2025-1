#include <stdio.h>

int main(void) {
  int x, resultado1, resultado2;

    printf("Diga um número:\n");
  scanf("%d", &x);
  resultado1 = x - 1;
  resultado2 = x + 1;
  printf("O antecessor do seu numero é: %d\n e o sucessor do seu  numero é: %d\n", resultado1, resultado2);

  return 0;
}