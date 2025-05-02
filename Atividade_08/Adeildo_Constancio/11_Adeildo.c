#include <stdio.h>

int main() {
  int num[15];
  int soma = 0;

  for (int i = 0; i < 15; i++) {
    printf("Digite um numero para o local %d: ", i);
    scanf("%d", &num[i]);
  }
  
  for (int i = 0; i < 15; i++) {
    if (i % 2 != 0) {
      soma += num[i];
    }
  }
  
  printf("\n A soma dos locais impares e %d", soma);

  return 0;
}