#include <stdio.h>

int meu_strlen(char *str) {
  int tamanho = 0; 
  while (str[tamanho] != '\0') {
    tamanho++;
  }
  return tamanho;
}
  int main(){
    char texto[] = "string de joão";
    printf("O tamanho da string é: %d\n", meu_strlen(texto));
  return 0;
}
