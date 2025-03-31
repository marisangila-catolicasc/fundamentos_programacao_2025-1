#include <stdio.h>
int main(void) {
  int idade;
  printf("Insira a sua idade: \n");
  scanf("%d", &idade);
  if(idade > 65){
    printf("Você é um eleitor facultativo!");
  }else if( idade >= 18 && idade <= 65){
    printf("Você é um eleitor obrigatóriio!");
  }else{
    printf("Você não é um eleior");
  }
  return 0;
}