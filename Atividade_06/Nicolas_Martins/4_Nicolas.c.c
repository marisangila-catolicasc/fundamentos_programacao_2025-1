#include <stdio.h>

int main() {

  int numeros[10];
  int par = 0, impar = 0;

  for (int i = 0; i < 10; i++) {
    printf("Digite algum número: ");
    scanf("%d", &numeros[i]);

    if (numeros[i] % 2 == 0) {
      par++;
    } else {
      impar++;
    }
  }

  printf("\nQuantidade de números pares: %d\n", par);
  printf("Quantidade de números ímpares: %d\n", impar);

  return 0;
}
