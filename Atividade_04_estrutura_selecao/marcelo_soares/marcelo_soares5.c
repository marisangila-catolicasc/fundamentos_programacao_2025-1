#include <stdio.h>
#include <math.h>

int main(void) {
int num1;

// 5. Fa¸ca um programa usando estruturas aninhadas que leia a idade de uma pessoa e informe a sua classe eleitoral:
  
//• Não eleitor (abaixo de 18 anos);
//• Eleitor obrigatório (de 18 a 65 anos);
//• Eleitor facultativo (acima de 65 anos).

printf("Digite a sua idade: ");
  scanf( "%d", &num1);
if (num1 >= 18 && num1 <= 65) {
  printf("Eleitor obrigatório");
} 
  else if  (num1 >= 65){
    printf("Eleitor facultativo");
    
  } else {
printf( "Não eleitor");
    
  }
  
  return 0;
}