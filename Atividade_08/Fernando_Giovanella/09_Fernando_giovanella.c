#include <stdio.h>

int main() {
  int a[5], b[5], c[10];

  for (int i = 0; i < 5; i++) {
    printf("Digite um valor pro vetor a na posicao %d: ", i + 1);
    scanf("%d", &a[i]);
  }

  printf("\n");
  
  for (int i = 0; i < 5; i++) {
    printf("Digite um valor pro vetor b na posicao %d: ", i + 1);
    scanf("%d", &b[i]);
  }
  
  for (int i = 0, x = 0; i < 5; i++) {
    c[x++] = a[i];
    c[x++] = b[i];
  }
  
  printf("\nExibicao no vetor c: \n");
  for (int i = 0; i < 10; i++) {
    printf("%d  ", c[i]);
  }

  return 0;
}