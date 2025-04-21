#include <stdio.h>

int main(){
  int i;
  float numero, soma = 0, media;
  
  for( i = 1; i<=8; i++){
    
printf("Digite o %d numero: ", i);
scanf("%f", &numero);
    
    soma += numero;
  }
  
  media = soma / 8;
  
printf("A media dos numeros é: %.2f", media);

 return 0;
}