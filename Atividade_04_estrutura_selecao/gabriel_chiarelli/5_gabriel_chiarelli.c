#include <stdlib.h>
#include <stdio.h>

/*
. Fa¸ca um programa usando estruturas aninhadas que leia a idade de uma pessoa
e informe a sua classe eleitoral:
• N˜ao eleitor (abaixo de 18 anos);
• Eleitor obrigat´orio (de 18 a 65 anos);
• Eleitor facultativo (acima de 65 anos).
*/

int main() {
  int idade;

  printf("Digite a sua idade: ");
  scanf("%d", &idade);
  
  if (idade < 18){
    printf("Não eleitor");
  }
  else if (idade >= 18 && idade <= 65){
    printf("Eleitor obrigatório");
  }
  else{
    printf("Eleitor facultativo");
  }
  
  return 0;
}
