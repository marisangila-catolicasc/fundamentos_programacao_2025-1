#include <stdio.h>

int main() {
  int inteiro, incremento;
  printf("Digite um número inteiro: ");
  scanf(" %d", &inteiro);
  printf("Digite o valor do incremento: ");
  scanf(" %d", &incremento);

  for (int i = 0; i <= inteiro; i += incremento) {
    printf("%d\n", i);
  }
return 0; }