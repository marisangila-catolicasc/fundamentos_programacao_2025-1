#include <stdio.h>

int meu_strlen (char string[]){
  int tamanho = 0;

  while (string[tamanho] != '\0'){
    tamanho++;
  }
  return tamanho;
}

int main(){
  char vetor[20] = {"programaacao"};

  printf("meu_strlen: %d\n", meu_strlen(vetor));
  return 0;
}