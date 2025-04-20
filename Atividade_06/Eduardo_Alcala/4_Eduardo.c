#include <stdio.h>

int main() {

  int numeros, par = 0, impar = 0;

  for (int i = 0; i < 10; i++) {
    printf("Digite um numero: ");
    scanf("%d", &numeros);

    if (numeros % 2 == 0) {
      par++;
    } else {
      impar++;
    }
  }

  printf("A quantidade de numeros pares é: %d \n\n", par);
  printf("A quantidade de numeros impares é: %d", impar);

  return 0;
}