#include <stdio.h>
int main(void) {
  int idade;
  float peso;
  char tipo;
  
  printf("Digite a idade do seu pet: \n");
  scanf("%d",&idade);
  printf("Digite o peso do seu pet: \n");
  scanf("%.2f", &peso);
  printf("Digite o tipo do seu pet: \n");
  scanf(" %c", &tipo);

  printf("A idade do seu pet eh: %d \n O peso do seu pet eh: %f \n O tipo do seu pet eh: %c", idade, peso, tipo);
  return 0;
}