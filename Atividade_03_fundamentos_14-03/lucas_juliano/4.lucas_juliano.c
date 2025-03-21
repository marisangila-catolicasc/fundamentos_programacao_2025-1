#include <stdio.h>

int main(void) {
  int idade;
  float peso;
  char tipo;
  printf("Você tem Cachorro(c) ou Gato(g)?\n");
  scanf(" %c", &tipo);
  printf("Qual o peso do seu pet?\n");
  scanf("%f", &peso);
  printf("Qual a idade do seu pet?\n");
  scanf("%d", &idade);
  printf("O tipo do seu animal é %c\nO peso do seu animal é %.f\nA idade do seu animal é %d \n", tipo, peso, idade);
  return 0;
}