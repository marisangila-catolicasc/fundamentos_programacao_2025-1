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
  int mtz[2][2] = {{10, 22}, {30, 44}};
  printf("Soma: %d\n", soma_matriz(2, 2, mtz));

  return 0;
}