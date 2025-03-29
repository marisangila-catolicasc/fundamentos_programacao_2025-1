#include <stdio.h>

int main(int argc, char const *argv[])
{

  int ano;
    printf("Digite o ano:\n");
    scanf("%d", &ano);
  if(ano>=0){
    if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0){
      printf("O ano %d é bissexto", ano);
    }else{
      printf("O ano %d não é bissexto", ano);
    }}else{
    printf("O ano é invalido");
    }

   
    
    
    return 0;
}
