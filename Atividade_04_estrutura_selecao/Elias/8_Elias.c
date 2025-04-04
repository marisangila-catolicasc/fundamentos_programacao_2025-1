#include "stdio.h"
int main(void) {

  int ano;

  printf("insira um ano:\n");
  scanf("%d", &ano);

  if (ano <= 0) {
    printf("ano invalido");
  } else if (ano % 400 == 0) {
    printf("ano bissexto");
  } else {
    printf("ano nao bissexto");
  }

  return 0;
}
