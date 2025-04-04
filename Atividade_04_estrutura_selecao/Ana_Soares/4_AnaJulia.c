#include <stdio.h>

int main(void) {
  int a, b;

  printf("Digite o numero A: \n");
  scanf(" %d", &a);
  printf("Digite o numero B: \n");
  scanf(" %d", &b);

  if (a > b) {
    printf("O numero A eh maior que b...");
  }
  if (a == b) {
    printf("Os dois numeros sao iguais...");
  }
  if (b > a) {
    printf("O numero B eh maior que A...");
  }

  return 0;
}