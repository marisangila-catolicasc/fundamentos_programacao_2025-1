#include <stdio.h>

int main(void) {

  int n1, n2;
  printf("Digite um número inteiro: \n");
  scanf("%d", &n1);

  printf("Digite um número inteiro: \n");
  scanf("%d", &n2);

  if (n1 < n2) {
    while (n1 != n2) {
      printf("%d\n", n1);
      n1++;
    }
      printf("Agora o numero 1: %d é igual ao numero 2: %d\n", n1, n2);
  } else if (n1 > n2) {
    while (n1 != n2) {
      printf("%d\n", n1);
      n1--;
    }
      printf("Agora o numero 1: %d é igual ao numero 2: %d\n", n1, n2);
  }

  return 0;
}