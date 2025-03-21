#include <stdio.h>
int main(void) {
  int idade;
  float peso;
  char tipo;

  
  printf("Qual a peso do seu pet:");
  scanf("%d", &peso);
  
  printf("Qual o idade do seu pet?:");
  scanf("%f", &idade);
  
  printf("Qual o tipo do seu pet: (C para cachorro , ou G para gato): ");  
  scanf(" %c", &tipo);

  if (tipo == 'c')
    printf("O seu pet é um cachorro");
  else
    printf("O seu pet é um gato");

}