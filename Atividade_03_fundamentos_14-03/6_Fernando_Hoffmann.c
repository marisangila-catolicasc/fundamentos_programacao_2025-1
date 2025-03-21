#include <stdio.h>

int main(void) {
  int num, antecessor, sucessor;
  printf("Digite um número: \n");
  scanf("%d", &num);
  antecessor = num - 1;
  sucessor = num + 1;
  printf("O número digitado foi %d, seu antecessor é %d, e seu sucessor é %d\n", num, antecessor, sucessor);
  return 0;
}