#include <stdio.h>

int main(void) {

  int ano;
  printf("Digite o ano: \n");
  scanf(" %d", &ano);

  if (ano % 4 == 0 || ano % 100 == 0 || ano % 400 == 0) {

    printf("O ano eh bissexto");
  } else {
    printf("O ano nao eh bissexto");
  }
  return 0;
  
}