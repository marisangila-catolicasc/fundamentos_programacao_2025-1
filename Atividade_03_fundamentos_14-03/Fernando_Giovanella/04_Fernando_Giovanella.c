#include <stdio.h>

int main(void) {

  int idade_pet;
  float peso_pet;
  char tipo_pet;

  printf("Digite a idade do seu pet: ");
  scanf("%d", &idade_pet);

  printf("Digite o peso do seu pet: ");
  scanf("%f", &peso_pet);

  printf("Digite o tipo do seu pet (C) para cachorro (G) para gato: ");
  scanf(" %c", &tipo_pet);

  printf("Idade do seu pet é: %d\n", idade_pet);
  printf("Peso do seu pet é: %.2fKG\n", peso_pet);
  printf("Tipo do seu pet é: %c\n", tipo_pet);

  return 0;
}