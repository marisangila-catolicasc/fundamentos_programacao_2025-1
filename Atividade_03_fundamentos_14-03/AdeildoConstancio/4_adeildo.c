#include <stdio.h>

int main() {
  int idade;
  float peso;
  char tipo;

  printf("digite a idade do seu pet: ");
  scanf("%d", &idade);

  printf("digite o peso do seu pet em quilos: ");
  scanf("%f", &peso);

  printf("digite o tipo do seu pet (c para cachorro, g para gato): ");
  scanf(" %c", &tipo);

  printf("informações do pet: ", "\n");
  printf("idade: %d anos", "\n", idade);
  printf("peso: %.2f kg", "\n", peso);

  if (tipo == 'c' ) {
    printf("tipo: cachorro\n");
  } else if (tipo == 'g' ) {
    printf("tipo: gato", "\n");
  } else {
    printf("tipo: inválido", "\n");
  }

  return 0;
}