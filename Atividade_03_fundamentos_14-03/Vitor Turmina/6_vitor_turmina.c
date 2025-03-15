#include <stdio.h>

int main(void) {
  int num;

  printf("Digite um numero: ");
  scanf("%d", &num);

  printf("O antecesser de %d eh %d e o sucesor eh %d\n", num, num - 1, num + 1);
  return 0;
}