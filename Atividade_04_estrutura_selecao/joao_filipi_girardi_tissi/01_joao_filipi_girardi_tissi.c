#include <stdio.h>
int num;
int main() {

  printf("Digite um número inteiro: \n");
  scanf("%d", &num);

  if (num >= 0) {
    printf("O número é positivo");
  }
  if (num < 0) {
    printf("O número é negativo");
  }
  

  return 0;
}