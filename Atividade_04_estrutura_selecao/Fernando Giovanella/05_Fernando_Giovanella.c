#include <stdio.h>

int main(){

  int idade;

  printf("Informe a sua idade: ");
  scanf("%d", &idade);

  if(idade < 18){
    printf("Nao eleitor! ");
  }else if(idade >= 18 && idade <= 65){
    printf("Eleitor obrigatorio! ");
  }else{
    printf("Eleitor facultativo!");
  }
  
return 0;
}