#include <stdio.h>

int meu_strlen(char *palavra) {
  int i = 0;
  while (palavra[i] != '\0') {
    i++;
  }
  return i;
}
int main(void) {

  char palavra[100];
  printf("Digite uma palavra: ");
  scanf("%s", palavra);
  int tamanho = meu_strlen(palavra);
  printf("O tamanho da palavra é: %d\n", tamanho);

  return 0;
}