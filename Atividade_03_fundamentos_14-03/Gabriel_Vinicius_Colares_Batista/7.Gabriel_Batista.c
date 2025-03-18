#include <stdio.h>

float cambio;
float converte;


int main(void) {
  
  printf("Digite o valor do câmbio hoje: \n");
    scanf("%f", &cambio);
  printf("Digite quanto deseja converter: \n");
  scanf("%f", &converte);

  printf("O valor convertido é: %f", cambio * converte);
}
