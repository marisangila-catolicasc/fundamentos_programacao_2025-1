#include <stdio.h>
int main(void) {
int ano;
  printf("Insira um ano com 4 digitos: \n");
  scanf("%d", &ano);
  if(ano <= 0){
    printf("Ano inválido");
  }else if((ano % 4) == 0 || (ano %400) == 0){
    printf("%d é um ano bissexto!", ano);
  }else{
    printf("%d não é um ano bissexto!", ano);
  }
  return 0;
}