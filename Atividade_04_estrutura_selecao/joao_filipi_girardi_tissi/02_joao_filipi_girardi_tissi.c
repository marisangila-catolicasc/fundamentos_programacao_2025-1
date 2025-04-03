#include <stdio.h>
int num;
int main() {

  printf("Digite um número inteiro: \n");
  scanf("%d", &num);

  if (num % 2 == 0) {
    printf("O número é par");
  }
  if (num % 2 == 1) {
    printf("O número é impar");
  }
  

  return 0;
}