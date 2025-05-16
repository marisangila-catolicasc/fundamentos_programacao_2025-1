#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int my_strlen(char *str) {
  int i = 0;
  while (str[i] != '\0') {
    i++;
  }
  return i;
}
int main(void) {
  char str[50];
  printf("Insira uma palavra: ");
  scanf("%s", str);
  printf("Sua palavra tem %d letras\n", my_strlen(str));

  return 0;
}