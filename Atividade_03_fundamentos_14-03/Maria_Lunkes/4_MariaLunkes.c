#include <stdio.h>

int main() {
  int idade_pet;
  int peso_pet;
  char tipo_pet;

  printf("Digite a idade do seu pet:\n");
  scanf("%d", &idade_pet);
  printf("Digite o peso do seu pet:\n");
  scanf("%d", &peso_pet);
  printf("Qual é o tipo do seu pet? Se for cachorro digite 'c', e se for gato digite 'g':\n");
  scanf(" %c", &tipo_pet);

  printf("A idade do seu pet eh: %d\n", idade_pet);
  printf("O peso do seu pet eh: %d Kg\n", peso_pet);
  printf("Otipo do seu pet eh: %c\n", tipo_pet);
  return 0;
}