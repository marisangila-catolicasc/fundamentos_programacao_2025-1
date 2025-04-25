#include <stdio.h>

int main() {
  float numero [8], soma = 0, media;
  

  for (int i = 0; i < 8; i++){

    printf("Escolha 8 numeros: ");
    scanf("%f", &numero[i]);}

  for (int i = 0; i < 8; i++){
    soma += numero[i];
    
  }
  media = soma / 8.0;

  printf("A media dos numeros eh: %.2f", media);
  
  return 0;
}