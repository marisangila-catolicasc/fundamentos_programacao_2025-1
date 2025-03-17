#include <stdio.h>

int main(void) {
  int num;

  printf("Digite um número inteiro\n");
    scanf("%d", &num);
  
  printf("O antecessor de %d eh %d e o sucessor eh %d\n", num, num - 1, num + 1);
  return 0;
}