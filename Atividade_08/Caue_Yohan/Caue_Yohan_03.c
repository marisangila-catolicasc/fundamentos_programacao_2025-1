#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int valores[6] = {8, 9, 7, 2, 8, 6}; 
  int media, maior = 0;
  int soma = 0;
  for (int i = 0; i <6; i++) {
     soma += valores[i];
  }
     media = soma/6;
  printf("Média dos valores: %d\n", media);
     for (int i = 0; i <6; i++){
    if(valores[i] > media){
      maior++;
      printf("Maior que a média: %d\n", valores[i]);
    }
  }
     printf("Quantidade de notas maior que a média: %d\n", maior);
  
 
   return 0;
}