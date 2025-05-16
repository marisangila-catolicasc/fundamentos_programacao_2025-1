#include <stdio.h>

int soma_matriz(int linhas, int colunas, int matriz[linhas][colunas]) {
  int soma = 0;
  for (int i = 0; i < linhas; i++) {
  for (int j = 0; j < colunas; j++) {
      soma += matriz[i][j];
    }
  }
  return soma;
}
int main() {
  int matriz[3][3] = {{14, 22, 30}, {24, 10, 20}};
  printf("A soma da matriz 3x3 eh: %d\n", soma_matriz(2, 2, matriz));

  return 0;
}
