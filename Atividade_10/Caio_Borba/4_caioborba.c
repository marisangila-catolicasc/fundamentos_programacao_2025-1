#include <stdio.h>

int my_strcmp(char *s1, char *s2) {
  int i = 0;
  while (s1[i] != '\0' && s2[i] != '\0') {
    if (s1[i] != s2[i])
      return 0;
    i++;
  }
  return (s1[i] == '\0' && s2[i] == '\0') ? 1 : 0;
}

int main() {
  char a[100], b[100];
  printf("Digite a primeira str: ");
  scanf("%s", a);
  printf("Digite a segunda str: ");
  scanf("%s", b);

  if (my_strcmp(a, b))
    printf("As strings são iguais.\n");
  else
    printf("As strings são diferentes.\n");

  return 0;
}