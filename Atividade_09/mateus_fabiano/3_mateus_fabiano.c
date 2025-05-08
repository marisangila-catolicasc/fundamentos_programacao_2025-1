#include <stdio.h>

int main() {
  int matriz[4][4];
  int somaPares = 0, maior, menor, linhaMaior, colunaMaior, linhaMenor,
      colunaMenor;

  printf("Digite os elementos da matriz 4x4:\n");
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      printf("Elemento [%d][%d]: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  maior = menor = matriz[0][0];
  linhaMaior = linhaMenor = colunaMaior = colunaMenor = 0;

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if (i % 2 == 0) {
        somaPares += matriz[i][j];
      }
      if (matriz[i][j] > maior) {
        maior = matriz[i][j];
        linhaMaior = i;
        colunaMaior = j;
      }
      if (matriz[i][j] < menor) {
        menor = matriz[i][j];
        linhaMenor = i;
        colunaMenor = j;
      }
    }
  }

  printf("Soma dos elementos das linhas pares: %d\n", somaPares);
  printf("Primeiro elemento: %d\n", matriz[0][0]);
  printf("Último elemento: %d\n", matriz[3][3]);

  printf("Soma dos elementos da linha 2: ");
  int somaLinha2 = 0;
  for (int j = 0; j < 4; j++) {
    somaLinha2 += matriz[2][j];
  }
  printf("%d\n", somaLinha2);

  printf("Diagonal Principal: ");
  for (int i = 0; i < 4; i++) {
    printf("%d ", matriz[i][i]);
  }
  printf("\n");

  printf("Maior valor: %d na posição [%d][%d]\n", maior, linhaMaior,
         colunaMaior);
  printf("Menor valor: %d na posição [%d][%d]\n", menor, linhaMenor,
         colunaMenor);

  return 0;
}
