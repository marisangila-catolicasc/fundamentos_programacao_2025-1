#include <stdio.h>

int main() {
  int ano;

  printf("fala o ano que voce nasceu: ");
  scanf("%d", &ano);

  if (ano <= 0) {
    printf("nao pode isso ae nao");
  }

  else if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
    printf(" eh  bissexto\n");
  }

  else {
    printf("nao eh bissexto");
  }
  return 0;
}