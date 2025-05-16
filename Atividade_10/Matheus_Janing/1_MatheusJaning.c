#include <stdio.h>

int meu_strlen( char *str){

  int contador = 0;

  while(str[contador] != '\0')
  contador++;

  return contador;
}

int main(){
  char palavra[100];

  printf("Digite uma string: ");
  scanf(" %s", palavra);

  printf("Caracteres: %d", meu_strlen(palavra));

  return 0;
}