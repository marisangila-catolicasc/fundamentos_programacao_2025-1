#include <stdio.h>

int main(void) {
  int idade;
  int peso;
  char tipo;
  
  printf("Informe a idade do seu pet.");
  scanf("%d", &idade);
  printf("Informe o peso do seu pet.");
  scanf("%d", &peso);
  printf("Informe o tipo do seu pet. (C para cachorro e G para gato)\n");
  scanf('%c', &tipo);
 
  printf("As informações do seu pet são: \n Idade: %d \n Peso: %d\n Tipo: %c" , idade, peso, tipo);
  
  return 0;
}