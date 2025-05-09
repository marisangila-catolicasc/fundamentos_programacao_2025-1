#include <stdio.h>

int main() {
  int matriz[4][4];
  int i, j;
  int somaLinha2 = 0;
  int maior, menor;
  int maiorI, maiorJ, menorI, menorJ;

  printf("Digite os valores da matriz 4x4:\n");
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      scanf("%d", &matriz[i][j]);

      if (i == 0 && j == 0) {
        maior = menor = matriz[i][j];
        maiorI = menorI = 0;
        maiorJ = menorJ = 0;
      }

      if (matriz[i][j] > maior) {
        maior = matriz[i][j];
        maiorI = i;
        maiorJ = j;
      }

      if (matriz[i][j] < menor) {
        menor = matriz[i][j];
        menorI = i;
        menorJ = j;
      }

      if (i == 1) {
        somaLinha2 += matriz[i][j];
      }
    }
  }

  printf("\nPrimeiro elemento: %d\n", matriz[0][0]);
  printf("Último elemento: %d\n", matriz[3][3]);
  printf("Soma da linha 2: %d\n", somaLinha2);

  printf("Diagonal principal: ");
  for (i = 0; i < 4; i++) {
    printf("%d ", matriz[i][i]);
  }

  printf("\nMaior valor: %d (posição [%d][%d])\n", maior, maiorI, maiorJ);
  printf("Menor valor: %d (posição [%d][%d])\n", menor, menorI, menorJ);

  return 0;
}