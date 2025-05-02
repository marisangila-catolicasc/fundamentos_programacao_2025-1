#include <stdio.h>

int main(){

  float notas[5] = {4.5, 5.5, 8, 7.5, 9};
  float soma = 0;
  float media;

  for(int i = 0; i<5; i++){
    soma += notas[i];
  }
  media = soma / 5;
  printf("Essa e a media das suas notas: %.2f", media);
  
  return 0;
}