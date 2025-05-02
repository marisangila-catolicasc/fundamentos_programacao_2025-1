#include <stdio.h>

int main(){

  float notas[5] = {5.5, 6.5, 9.5, 10, 10};
  float soma = 0;
  float media;

  for(int i = 0; i<5; i++){
    soma += notas[i];
  }
  media = soma / 5;
  printf("A media das notas eh: %.2f", media);
  
  return 0;
}