
#include <stdio.h>

int main(void) {
  int idade;
  float peso;
  char tipo;
  
  printf("Digite a idade do seu pet: ");
  scanf("%d", &idade);
  
  printf("Digite o peso do seu pet: ");
  scanf("%f", &peso);
  
  printf("Digite o tipo do pet (c para cachorro, g para gato): ");
  scanf(" %c", &tipo);
  
  printf("\nInformacoes do seu pet:\n");
  printf("Idade: %d anos\n", idade);
  printf("Peso: %.2f kg\n", peso);
  printf("Tipo: %s\n", (tipo == 'c' || tipo == 'C') ? "Cachorro" : "Gato");
  
  return 0;
}
