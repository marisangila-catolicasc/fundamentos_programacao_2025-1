#include <stdio.h>

int main() {
  int valores[4][4] = {
      {5, 2, 12, 29}, {19, 6, 1, 8}, {9, 23, 10, 5}, {13, 27, 15, 2}};

  int soma_linhas_pares = 0, soma_elementos_2 = 0, maior_valor = 0,
      menor_valor = 5;

  int valores_diagonal[4];

  for (int i = 0; i < 4; i++) {
    if (i % 2 == 0) {
      for (int j = 0; j < 4; j++) {
        soma_linhas_pares += valores[i][j];
      }
    }
  }

  for (int i = 0; i < 4; i++) {
    soma_elementos_2 += valores[1][i];
  }

  for (int i = 0; i < 4; i++) {
    printf("%d ", valores[i][i]);
    valores_diagonal[i] = valores[i][i];
  }

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if (valores[i][j] > maior_valor) {
        maior_valor = valores[i][j];
      }
      if (valores[i][j] < menor_valor) {
        menor_valor = valores[i][j];
      }
    }
  }

  printf("Soma das linhas pares: %d\n", soma_linhas_pares);
  printf("Valor do primeiro elemento da matriz: %d\n", valores[0][0]);
  printf("Valor do último elemento da matriz: %d\n", valores[3][3]);
  printf("Soma dos elementos da segunda linha: %d\n", soma_elementos_2);
  printf("Elementos da diagonal principal: %d %d %d %d\n", valores_diagonal[0],
         valores_diagonal[1], valores_diagonal[2], valores_diagonal[3]);
  printf("Maior valor da matriz: %d\n", maior_valor);
  printf("Menor valor da matriz: %d\n", menor_valor);

  return 0;
}