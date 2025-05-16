void meu_strcpy(char *destino, const char *origem) {
  while (*origem) {
    *destino = *origem;
     destino++;
     origem++;
  }
  *destino = '\0';
}

#include <stdio.h>

void meu_strcpy(char *destino, const char *origem);

int main() {
  char texto1[] = "Hello, world!";
  char copia_texto1[20];

  meu_strcpy(copia_texto1, texto1);

  printf("Texto original: %s\n", texto1);
  printf("Texto copiado: %s\n", copia_texto1);

  return 0;
}