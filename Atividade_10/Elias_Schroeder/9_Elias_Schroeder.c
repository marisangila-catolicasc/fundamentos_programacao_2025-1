#include "stdio.h"

int soma_matriz(int matriz[4][4]) {

  int soma = 0;
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
      soma += matriz[i][j];

  return soma;
}
int main(void) {

  int matriz[4][4];

  printf("Digite os valores da matriz: ");
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
      scanf("%d", &matriz[i][j]);

  printf("A soma dos valores da matriz é: %d\n", soma_matriz(matriz));

  return 0;
}
