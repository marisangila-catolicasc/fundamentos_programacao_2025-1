#include <stdio.h>

int verifica_primo(int numero){

  if(numero < 2){
    return 0;
  }
  for(int i = 2; i < numero; i++){
    if(numero % i == 0){
      return 0;
    }
  }
  return 1;
}

int main(){

  int numero, verificador;

  printf("Digite um numero inteiro: ");
  scanf("%d", &numero);

  verificador = verifica_primo(numero);

  if(verificador == 1){
    printf("O numero eh primo!");
  } else{
    printf("O numero nao eh primo!");
  }
}