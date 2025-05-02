#include <stdio.h>

int main() {
  int valores[3][3];
  int linha;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("Digite o valor para a posição [%d][%d]: ", i, j);
      scanf("%d", &valores[i][j]);
    }
  }
  printf("Qual linha você deseja visualizar? (0, 1 ou 2): ");
  scanf("%d", &linha);

  printf("Valores da linha %d: %d %d %d\n", linha, valores[linha][0],
         valores[linha][1], valores[linha][2]);

  return 0;
}