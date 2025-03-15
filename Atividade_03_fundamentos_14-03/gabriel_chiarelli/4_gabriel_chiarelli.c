#include <stdio.h>
/*
Desenvolva um programa que pe¸ca ao usu´ario, a idade e o peso de seu pet, e qual
tipo de pet. Se for cachorro o usu´ario deve digitar c, se for gato, digita g. Mostre
as entradas na tela.
*/
int main() {
  int idade;
  float peso;
  char tipo;
  printf("Insira a idade do pet:\n");
  scanf("%d", &idade);
  printf("Insira o peso do pet:\n");
  scanf("%f", &peso);
  printf("Insira o tipo do animal\nC - Cachorro\nG - Gato\n");
  scanf(" %c", &tipo);
  
  if(tipo == 'c' || tipo == 'C'){
    printf("Cachorro de %d anos e %.2f kg", idade, peso);
  }else if(tipo == 'g' || tipo == 'G'){
    printf("Gato de %d anos e %.2f kg", idade, peso);
  }

  return 0;
}