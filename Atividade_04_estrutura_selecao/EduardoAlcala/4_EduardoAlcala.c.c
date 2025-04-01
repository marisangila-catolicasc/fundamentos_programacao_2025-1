#include <stdio.h>

int main(void) {
  int a, b;

  printf("Digite o numero A: \n");
  scanf(" %d", &a);
  printf("Digite o numero B: \n");
  scanf(" %d", &b);

  if (a > b) {
    printf("O número A é maior que b...");
  }
  if (a == b) {
    printf("Os dois números são iguais...");
  }
  if (b > a) {
    printf("O número B é maior que A...");
  }

  return 0;
}