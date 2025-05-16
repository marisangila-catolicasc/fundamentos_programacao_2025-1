#include "stdio.h"

int verefica_vetores_iguais(int *vetor1, int *vetor2, int tamanho) {
  int i;
  for (i = 0; i < tamanho; i++) {
    if (vetor1[i] != vetor2[i]) {
      return 0;
    }
  }
  return 1;
}

int main(void) {

  int vetor1[10];
  int vetor2[10];

  printf("Digite os valores do primeiro vetor: ");
  for (int i = 0; i < 10; i++)
    scanf("%d", &vetor1[i]);

  printf("Digite os valores do segundo vetor: ");
  for (int i = 0; i < 10; i++)
    scanf("%d", &vetor2[i]);

  if (verefica_vetores_iguais(vetor1, vetor2, 10) == 1)
    printf("Os vetores são iguais\n");
  else
    printf("Os vetores são diferentes\n");

  return 0;
}
