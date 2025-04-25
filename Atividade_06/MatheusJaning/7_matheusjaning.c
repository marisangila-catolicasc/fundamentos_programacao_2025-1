#include <stdio.h>
int main(){

  float numeros[8], soma = 0, media;
  printf("Insira 8 numeros: \n");

for(int i = 0; i < 8; i++){
  scanf("%f", &numeros[i]);
}

for(int i = 0; i < 8; i++){
  soma += numeros[i];
}
  media = soma / 8.0;
  
  printf("Media dos numeros informados: %.2f", media);
}