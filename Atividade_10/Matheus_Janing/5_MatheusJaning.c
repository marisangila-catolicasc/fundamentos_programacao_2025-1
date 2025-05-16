#include <stdio.h>

int verifica_palindromo(char *str){

  int start = 0, end = 0;

  while(str[end] != '\0'){
    end++;
  }
  end--;

  while(start < end){
    if(str[start] != str[end])
      return 0;
    start++;
    end--;
  }  
  return 1;
}

int main(){

  char pala[100];

  printf("Digite uma string: ");
  scanf("%s", pala);

  int verificacao = verifica_palindromo(pala);

  if(verificacao == 1){
    printf("Eh palindromo!");
  } else{
    printf("Nao eh palindromo!");
  }
}