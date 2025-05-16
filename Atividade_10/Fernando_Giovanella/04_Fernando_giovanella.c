#include <stdio.h>

int meu_strcmp(char *a, char *b) {
  while (*a || *b) {
    if (*a != *b) {
      return 0;
    }
    a++;
    b++;
  }
  return 1;
}

int main() {
  char nome1[] = "gato";
  char nome2[] = "gato";
  char nome3[] = "cachorro";

  if (meu_strcmp(nome1, nome2)) {
    printf("Nome 1 e nome 2 sao iguais\n");
  } else {
    printf("Nome 1 e nome 2 sao diferentes\n");
  }

  if (meu_strcmp(nome1, nome3)) {
    printf("Nome 1 e nome 3 sao iguais\n");
  } else {
    printf("Nome 1 e nome 3 sao diferentes\n");
  }

  return 0;
}