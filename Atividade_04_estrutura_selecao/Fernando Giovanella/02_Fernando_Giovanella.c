#include <stdio.h>

int main(){

  int numero;

  printf("Informe um numero: \n");
  scanf("%d", &numero);

  if (numero %2 == 0){
    printf("O numero é par!\n");
  }else{
    printf("O numero é impar!");
  }
  
return 0;
}