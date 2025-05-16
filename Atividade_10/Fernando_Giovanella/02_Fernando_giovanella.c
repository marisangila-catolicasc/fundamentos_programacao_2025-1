void meu_strcat(char *a, char *b) {
  while (*a) {
    a++;
  }

  while (*b) {
    *a++ = *b++;
  }
  
  *a = '\0';
  
}

#include <stdio.h>

void meu_strcat(char *a, char *b);

int main() {
  char frase1[20] = "Ola, ";
  char frase2[] = "tudo bem?";

  meu_strcat(frase1, frase2);

  printf("%s\n", frase1);

  return 0;
}