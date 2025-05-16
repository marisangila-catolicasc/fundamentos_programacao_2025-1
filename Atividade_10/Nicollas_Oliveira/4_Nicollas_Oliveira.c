#include <stdio.h>

int meu_strcmp(char *str, char *str2) {
  int verificador = 0;
  int i = 0;
  while (*str != '\0' && *str2 != '\0') {
    if (str[i] != str2[i]) {
      verificador = 1;
    }
    i++;
    return verificador;
  }
}

int main(void) {
  char str[100];
  char str2[100];

  printf("Digite uma palavra: ");
  scanf("%s", str);

  printf("Digite outra palavra: ");
  scanf("%s", str2);

  meu_strcmp(str, str2);
  if (meu_strcmp(str, str2) == 0)
    printf("iguais");
  else
    printf("diferentes");
  return 0;
}
