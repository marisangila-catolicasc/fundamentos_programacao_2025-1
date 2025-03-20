#include <stdio.h>

int main(void) {
  int idade;
  float peso;
  char tipo;
  printf("Digite a idade do seu pet: \n");
  scanf("%d", &idade);
  printf("Digite o peso do seu pet: \n");
  scanf("%f", &peso);
  printf("Digite o tipo do seu pet: \n");
  scanf(" %c", &tipo);
  printf("A idade do seu pet é %d\n", idade);
  printf("O peso do seu pet é %f\n", peso);
  printf("O tipo do seu pet é %c\n", tipo);
}