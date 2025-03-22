#include "stdio.h"
int main(void) {
  int idade;
  float peso;
  char tipo;


  printf("Qual a idade do seu pet?");
  scanf(" %d", &idade); 

  printf("Qual o peso do seu pet?");
  scanf(" %f", &peso);

  printf("Qual o tipo do seu pet? Digite 'c' para cachorro ou 'g' para gato");
  scanf(" %c", &tipo);
  
  printf("A idade do seu pet é %d anos, o peso é %.2f kg e o tipo é %c", idade, peso, tipo);
  return 0;
}
