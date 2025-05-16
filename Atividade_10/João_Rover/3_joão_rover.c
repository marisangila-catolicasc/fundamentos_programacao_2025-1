#include <stdio.h>

void meu_strcpy(char *copia, char *original){
  int i = 0;
  while(original[i] != '\0'){
    copia[i] = original[i];
    i++;
  }

    copia[i] = '\0';
}

int main(){
  char original[] = "João Rover";
  char copia[100];


meu_strcpy(copia, original);

printf("Cópia: %s\n", copia);

  return 0;
}
