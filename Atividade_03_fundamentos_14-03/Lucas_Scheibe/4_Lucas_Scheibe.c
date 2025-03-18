#include <stdio.h>

int main() {
  int idade; 
  float peso; 
  char tipo;
printf("Digite a idade do pet:\n");
  scanf("%d", &idade);

  printf("Digite o peso:\n");
  scanf("%f", &peso);

  printf("digite C se for cachorro e G se for gato:\n");
  scanf(" %c", &tipo);

  printf("a idade é: %d !!!! \n", idade);
  printf("o peso é: %f  \n", peso);
  printf("o seu animal é: %c  \n", tipo);
  return 0;
}
