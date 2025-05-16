#include <stdio.h>

int verifica_primo(int numero){
  if(numero <= 1){
  return 1;
}
  for(int i = 2; i * i <= numero; i++){
    if(numero % i == 0){
      return 0;
    }
  }

  return 1;
  }

int main(){
  int num1 = 4;
  int num2 = 7;

  printf("O número %d é primo? %d\n", num1, verifica_primo(num1));
  printf("O número %d é primo? %d\n", num2, verifica_primo(num2));

    
  return 0;
}
