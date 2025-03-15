#include <stdio.h>

int main(void) {

  int N1;

  printf("Digite um número para descobrir seu sucessor e seu antecessor: ");
  scanf("%d", &N1);

  printf("O sucessor do numero selecionado é: %d\n", N1 + 1);

  printf("O antecessor do numero selecionado é: %d\n", N1 - 1);

  return 0;
}