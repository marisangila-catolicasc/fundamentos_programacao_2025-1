#include <stdio.h>

int main() {
  int matriz[3][3], i, j, linha;

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("digite os valores da matriz: ");
      scanf("%d", &matriz[i][j]);
    }
  }

  printf("qual linha voce quer ver? [1][2][3]");
  scanf("%d", &linha);

  if (linha == 1) {
    printf("[%d] [%d] [%d]", matriz[0][0], matriz[0][1], matriz[0][2]);
  } else if (linha == 2) {
    printf("[%d] [%d] [%d]", matriz[1][0], matriz[1][1], matriz[1][2]);
  } else if (linha == 3)
    printf("[%d] [%d] [%d]", matriz[2][0], matriz[2][1], matriz[2][2]);
  else
    printf("ta errado isso ai mano");
  return 0;
}
