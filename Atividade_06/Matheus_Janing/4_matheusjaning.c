#include <stdio.h>

int main(){

  int numeros[10], pares = 0, impares = 0;

  for(int i = 0; i < 10; i++){
    printf("Insira o %dº numero: ", i + 1);
    scanf("%d", &numeros[i]);
  
  if(numeros[i] % 2 == 0){
    pares++;
  } else{
    impares++;
  }
  }
  printf("\nImpares: %d", impares);
  printf("\nPares: %d", pares);
}