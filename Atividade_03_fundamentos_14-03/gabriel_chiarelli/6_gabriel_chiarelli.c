#include <stdio.h>
/*
Desenvolva um algoritmo que pe¸ca ao usu´ario um
n´umero inteiro. Como sa´ıda, mostre: o n´umero, seu antecessor e seu sucessor.
Exemplo: “O n´umero informado foi 30, o antecessor ´e 29 e o sucessor ´e 31.”*/
int main() {
  int num;

  printf("Digite um número inteiro: ");
  scanf("%d", &num);
  printf("O número informado foi %d, o antecessor é %d e o sucessor é %d!", num, num - 1, num + 1);

  return 0;
}