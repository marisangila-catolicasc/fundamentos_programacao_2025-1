#include <stdio.h>

int main(void) {

  int ano;
  printf("Digite o ano: \n");
  scanf(" %d", &ano);

  if (ano % 4 == 0 || ano % 100 == 0 || ano % 400 == 0) {
    printf("O ano é bissexto");
  } else {
    printf("Ano não é bissexto");
  }
  return 0;
}