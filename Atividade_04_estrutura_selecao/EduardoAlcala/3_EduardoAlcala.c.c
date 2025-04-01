#include <stdio.h>

int main() {
  float total, macas;
  printf("Digite quantas macas foram compradas!\n");
  scanf(" %f", &macas);

  if (macas >= 12) {
    total = macas * 1.95;
    printf("O total a pagar é: %.2f", total);
  } else {
    total = macas * 2.30;
    printf("O total a pagar é: %.2f", total);
  }
  return 0;
}
