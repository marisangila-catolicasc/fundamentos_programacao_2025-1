#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
int meu_strcat(char *str, char *str2){
  int i = 0;
  int j = 0;
  while (str[i] != '\0'){
    i++;
  }
  str[i] = ' ';
  i++;
  while (str2[j] != '\0'){
    str[i] = str2[j];
    i++;
    j++;
  }
  str[i] = '\0';
  printf("Seu nome eh: %s\n", str);
  return 0;
};

int main(void) {
  char str[50];
  char str2[50];
  printf("qual seu nome?\n");
  scanf("%s", str);
  printf("qual seu sobrenome?\n");
  scanf("%s", str2);
  meu_strcat(str, str2);
return 0;
}