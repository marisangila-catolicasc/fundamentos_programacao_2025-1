#include <stdio.h>
#include <math.h>

int idade_pet;
float peso_pet;
char tipo_pet;

int main(void) {
  printf("Digite a idade do seu pet: ");
  scanf("%d", &idade_pet);
  printf("Digite o peso do seu pet: ");
  scanf("%f", &peso_pet);
  printf("Digite o tipo do seu pet, C para cachorro e G para gato: ");
  scanf(" %c", &tipo_pet);
  printf("A idade do seu pet é %d anos\n", idade_pet);
  printf("O peso do seu pet é %.2f kg\n", peso_pet);
  printf("O tipo do seu pet é %c\n", tipo_pet);
}