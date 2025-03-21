#include <stdio.h>

int main() {
  int idade;
  float peso;
  char especie;
  
  printf("Qual a idade do seu pet?\n");
  scanf("%d", &idade);
  printf("Qual o peso do seu pet?\n");
  scanf("%d", &peso);
  printf("Se você tem um cachorro, digite c, se você tem um gato digite G.\n");
  scanf(" %c", &especie);

  printf("O seu %c tem %d anos e pesa %d kg\n",especie, idade, peso);
  
  return 0;
}