#include <stdio.h>

int main(void) {
  int idade;
  float peso;
  char tipo;

  printf("Quantos anos seu pet tem\n");
  scanf("%d", &idade);
  printf("Qual o peso do seu pet\n");
  scanf("%f", &peso);
  printf("Informe o tipo do seu pet! 'c' se for cachorro, e 'g' se for gato\n");
  scanf(" %c", &tipo);

  if(tipo == 'c'){
    printf("Voce tem um cachorro de %d anos e pesa %.2fkg\n", idade, peso);
  }
  else if(tipo == 'g'){
    printf("Voce tem um gato de %d anos e pesa %.2fkg\n", idade, peso);
  }
  else{
    printf("Animal nao identificado");
  }
  return 0;
}