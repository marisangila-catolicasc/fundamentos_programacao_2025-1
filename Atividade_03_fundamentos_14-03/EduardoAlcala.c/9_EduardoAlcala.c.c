#include <stdio.h> 

float valor; 

char nomeP[100]; 

int main(void) { 

  printf("Qual produto você quer comprar?  \n"); 

  scanf(" %s", &nomeP); 

  printf("Digite o preço: \n"); 

  scanf(" %f", &valor); 

  printf("Segue as informações do produto: \n"); 

  printf( "Nome do produto: %s \n", nomeP); 

  printf("O preço com 50 porcento de impostos fica: %.2f \n", valor * 1.5); 

  return 0; 

} 