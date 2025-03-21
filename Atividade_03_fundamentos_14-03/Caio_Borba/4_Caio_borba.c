#include <stdio.h>
int main(void) {
  int idade;
  float peso;
  char tipo;
  printf("Digite a idade do seu pet\n");
  scanf("%d", &idade);
  printf("Qual o peso do seu pet?:\n");
  scanf("%f", &peso);
  printf("Qual o tipo do seu pet (c ou g):", tipo);  
  scanf("%c", tipo);
  return 0;
}