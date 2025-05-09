#include <stdio.h>

int main(void) {

  int matriz[2][3];
  int soma = 0;

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("Digite um valor: ");
      scanf("%d", &matriz[i][j]);
    }
  }

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      soma += matriz[i][j];
    }
  }

  printf("A soma dos valores da matriz é: %d\n", soma);

  return 0;
}