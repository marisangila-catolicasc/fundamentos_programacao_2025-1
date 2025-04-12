#include <stdio.h>
int main() {

  // Faça um programa que peça ao usuário 10 números e mostre posteriormente
  // quantos são pares, bem como quantos são ímpares

  int pares = 0, impares = 0;

  for (int i = 0; i <= 10; i++) {
    int num;
    printf("Digite um número:\n", i);
    scanf("%d", &num);

    if (num % 2 == 0) {

      pares++;

    } else {

      impares++;
    }
  }

  printf("Existem %d números pares \n", pares);
  printf("Existem %d números ímpares \n", impares);

  return 0;
}
