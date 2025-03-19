#include <stdio.h>

int main() {
  int idade;
  float peso;
  char raca;

  printf("Digite a idade do seu pet: ");
  scanf("%d", &idade);
  printf("Digite o peso do seu pet: ");
  scanf("%f", &peso);
  printf("Digite a raça do seu pet, sendo G para gato e C para cachorro: ");
  scanf(" %c", &raca);

  if (raca == 'g' || raca == 'G') {
    printf("Seu pet tem %d anos e pesa %.2f kg. Ele é um gato", idade, peso);
  }
  else
    printf("Seu pet tem %d anos e pesa %.2f kg. Ele é um cachorro" , idade, peso);
  
  return 0;
}