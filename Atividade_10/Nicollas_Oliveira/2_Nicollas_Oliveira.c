#include <stdio.h>

void meu_strcat(char *palavra1, char *palavra2) {
  int i = 0, j = 0;

  while (palavra1[i] != '\0') {
    i++;
  }
  while (palavra2[j] != '\0') {
    palavra1[i + j] = palavra2[j];
    j++;
  }
  palavra1[i + j] = '\0';
}

int main() {
  char str1[100], str2[50];

  printf("Digite a primeira string: ");
  scanf("%[^\n]", str1);
  getchar();

  printf("Digite a segunda string: ");
  scanf("%[^\n]", str2);

  meu_strcat(str1, str2);

  printf("Strings concatenadas: %s\n", str1);

  return 0;
}