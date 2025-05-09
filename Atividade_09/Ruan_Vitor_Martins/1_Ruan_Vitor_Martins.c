#include <stdio.h>

int main() {
  int matrix[2][3];
  int i, j, soma = 0;

  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++) {
      printf("digite o valor: ");
      scanf("%d", &matrix[i][j]);
      soma += matrix[i][j];
    }
  }

  printf("\nsoma: %d\n", soma);

  return 0;
}
