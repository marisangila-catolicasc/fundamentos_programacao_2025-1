#include <stdio.h>

int main() {
  int matriz[3][3];
  int linha;

  printf("Digite os elementos da matriz 3x3:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("Elemento [%d][%d]: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  printf("Digite o número da linha que deseja ver (0 a 2): ");
  scanf("%d", &linha);

  if (linha >= 0 && linha < 3) {
    printf("Valores da linha %d: ", linha);
    for (int j = 0; j < 3; j++) {
      printf("%d ", matriz[linha][j]);
    }
    printf("\n");
  } else {
    printf("Linha inválida.\n");
  }

  return 0;
}
