#include <stdio.h>

int main() {
  int num[15];
  int soma = 0;

  for (int i = 0; i < 15; i++) {
    printf("Digite um numero para a posicao %d no vetor: ", i);
    scanf("%d", &num[i]);
  }
  
  for (int i = 0; i < 15; i++) {
    if (i % 2 != 0) {
      soma += num[i];
    }
  }
  
  printf("\nA soma das posicoes impares eh %d", soma);

  return 0;
}