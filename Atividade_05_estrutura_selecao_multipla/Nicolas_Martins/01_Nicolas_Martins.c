#include <stdio.h>

int main() {
  char codigo;
  printf("[S]  sanduiche_de_presunto\n");
  printf("[C]  churros\n");
  printf("[L]  suco_de_laranja\n");
  printf("Escolha um produto:");
  scanf("%c", &codigo);
  switch (codigo) {

  case 'S':
    printf("O valor do sanduiche é R$8,00");
    break;

  case 'C':
    printf("O valor do churros é R$3,50");
    break;

  case 'L':
    printf("O valor do suco de laranja é R$5,00");
    break;
  }
  return 0;
}
