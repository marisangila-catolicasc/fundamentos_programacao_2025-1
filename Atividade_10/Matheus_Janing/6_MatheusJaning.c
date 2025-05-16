#include <stdio.h>

int verifica_par_impar(int numero){

  if(numero %2 == 0){
    return 1;
  } else{
    return 0;
  }
}

int main(){

  int numero, verificador;

  printf("Insira um numero interio: ");
  scanf("%d", &numero);

  verificador = verifica_par_impar(numero);

  if(verificador == 1){
    printf("O numero eh par!");
  } else{
    printf("O numero eh impar!");
  }
}