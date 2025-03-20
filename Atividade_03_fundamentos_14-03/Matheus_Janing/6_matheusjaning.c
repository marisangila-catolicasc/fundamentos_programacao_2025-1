#include <stdio.h>

int main(void) {
 int antecessor, sucessor, inteiro;
  printf("Insira um numero inteiro: \n");
   scanf("%d", &inteiro);
  sucessor = inteiro + 1;
  antecessor = inteiro - 1;
  printf("O numero informado foi " "%d", inteiro);
    printf(" seu antecessor eh " "%d", antecessor);
    printf(" e seu seucessor é " "%d", sucessor);
  return 0;
}