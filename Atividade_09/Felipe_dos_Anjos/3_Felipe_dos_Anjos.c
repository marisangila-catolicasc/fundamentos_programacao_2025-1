#include <stdio.h>

int main() {
  int matriz[4][4] = {
      {5, 2, 12, 29}, {19, 6, 1, 8}, {9, 23, 10, 5}, {13, 27, 15, 2}};

  int somaLinhasPares = 0, somaSegundaLinha = 0, maiorNumero = 0,
      menorNumero = 5;

  int diagonalPrincipal[4];

  for (int linha = 0; linha < 4; linha++) {
    if (linha % 2 == 0) {
      for (int coluna = 0; coluna < 4; coluna++) {
        somaLinhasPares += matriz[linha][coluna];
      }
    }
  }

  for (int coluna = 0; coluna < 4; coluna++) {
    somaSegundaLinha += matriz[1][coluna];
  }

  for (int i = 0; i < 4; i++) {
    printf("%d ", matriz[i][i]);
    diagonalPrincipal[i] = matriz[i][i];
  }

  for (int linha = 0; linha < 4; linha++) {
    for (int coluna = 0; coluna < 4; coluna++) {
      if (matriz[linha][coluna] > maiorNumero) {
        maiorNumero = matriz[linha][coluna];
      }
      if (matriz[linha][coluna] < menorNumero) {
        menorNumero = matriz[linha][coluna];
      }
    }
  }

  printf("\nSoma das linhas de índice par: %d\n", somaLinhasPares);
  printf("Primeiro número da matriz: %d\n", matriz[0][0]);
  printf("Último número da matriz: %d\n", matriz[3][3]);
  printf("Soma dos números da segunda linha: %d\n", somaSegundaLinha);
  printf("Números da diagonal principal: %d %d %d %d\n", diagonalPrincipal[0],
         diagonalPrincipal[1], diagonalPrincipal[2], diagonalPrincipal[3]);
  printf("Maior número encontrado: %d\n", maiorNumero);
  printf("Menor número encontrado: %d\n", menorNumero);

  return 0;
}
