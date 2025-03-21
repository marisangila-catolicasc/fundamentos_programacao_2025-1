#include <stdio.h>

int main(void) {
  int idade;
  float peso;
  char tipo;
  printf("digite c para cachorro ou digite g para gato \n");
  scanf(" %c", &tipo);
  printf("Qual o peso do seu pet? \n");
  scanf("%f", &peso);
  printf("Qual a idade do seu pet \n");
  scanf("%d", &idade);
  printf("O tipo do seu naimal é %c, O peso do seu animal é %f, a idade do seu animal é %d \n", tipo, peso, idade);
  return 0;
}