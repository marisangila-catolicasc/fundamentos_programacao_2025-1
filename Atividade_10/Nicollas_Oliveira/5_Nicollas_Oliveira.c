#include "stdio.h"

int vereficar_palindromo(char *palavra) {
  int i = 0, j = 0;
  while (palavra[i] != '\0') {
    i++;
  }
  i--;
  while (i > j) {
    if (palavra[i] != palavra[j]) {
      return 0;
    }
    i--;
    j++;
  }
  return 1;
}
int main(void) {

  printf("Insira uma palavra:\n ");
  char palavra[100];
  scanf("%s", palavra);
  if (vereficar_palindromo(palavra) == 1) {
    printf("A palavra é um palindromo\n");
  } else {
    printf("A palavra não é um palindromo\n");
  }

  return 0;
}
