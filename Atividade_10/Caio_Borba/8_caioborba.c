#include <stdio.h>

int verify_vetor_iguais(int *V1, int *V2, int height) {
  for (int i = 0; i < height; i++) {
    if (V1[i] != V2[i])
      return 0;
  }
  return 1;
}

int main() {
  int height;
  printf("digite o tamanho dos vetores: ");
  scanf("%d", &height);

  int v1[height], v2[height];

  printf("digite os elementos do primeiro vetor:\n");
  for (int i = 0; i < height; i++) {
    scanf("%d", &v1[i]);
  }

  printf("digite os elementos do segundo vetor:\n");
  for (int i = 0; i < height; i++) {
    scanf("%d", &v2[i]);
  }

  if (verifica_vetores_iguais(v1, v2, height))
    printf("os vetores sao iguais.\n");
  else
    printf("os vetores sao diferentes.\n");

  return 0;
}