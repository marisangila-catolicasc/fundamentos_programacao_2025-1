#include <stdio.h>

int main(void) {

  int idade;
  float peso;
  char tipo;

  printf("Informe a idade do seu pet\n");
  scanf("%d", &idade);
  printf("Informe o peso do seu pet\n");
  scanf("%f", &peso);
  printf("Informe o tipo do seu pet! 'c' se for cachorro, e 'g' se for gato\n");
  scanf(" %c", &tipo);

  if(tipo == 'c'){
    printf("Voce tem um cachorro de %d anos e pesa %.2f kg", idade,peso);
      }
  else if(tipo == 'g'){
    printf("Voce tem um gato de %d anos e pesa %.2f", idade,peso);
  }
  else{
    printf("Animal nao identificado");
  }
  return 0;
}