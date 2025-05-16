#include "stdio.h"

void meu_strcpy(char *destino, char *origem){
  int i = 0;
  while (origem[i] != '\0') {
    destino[i] = origem[i];
    i++;
  }
}



int main(void) {

  char origem[100];
  char destino[100];

  printf("Digite uma palavra: ");
  scanf("%s", origem);
  meu_strcpy(destino, origem);
  printf("A palavra copiada é: %s\n", destino);

  
  return 0;
}
