#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
int meu_strcpy(char *str, char *str2){
  str2 = str;
  printf("A palavra copiada eh: %s", str2);
};

int main(void) {
  char str[50];
  char str2[50];
  printf("Digite uma palavra: ");
  scanf("%s", str);
  meu_strcpy(str, str2);
return 0;
}