#include <stdio.h> 

float dolar, cambio; 

int main(void) { 

  printf("Quantos dolares você quer?  \n"); 

  scanf(" %f", &dolar); 

  printf("Qual o cambio do real para o dolar?  \n"); 

  scanf(" %f", &cambio); 

  printf("Você precisa de , %.2f" , dolar*cambio); 

  return 0; 

} 