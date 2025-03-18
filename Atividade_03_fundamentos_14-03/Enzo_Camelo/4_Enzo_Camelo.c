#include <stdio.h>

int main(void) {
  int idade, peso;
  char tipo_pet;

  printf("Digite a idade do animal:\n");
  scanf("%d", &idade);
  printf("Digite o peso do animal:\n");
  scanf("%d", &peso);
  printf("Se você tem um cachorro digite c, se for um gato digite g :\n");
  scanf(" %c", &tipo_pet);
  return 0;
}