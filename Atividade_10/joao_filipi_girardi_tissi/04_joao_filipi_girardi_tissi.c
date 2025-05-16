#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
int meu_strcmp(char *str, char *str2){
  int verificador = 0;
  int i = 0;
  while(str[i] != '\0' && str2[i] != '\0'){
    if(str[i] == str2[i]){
        verificador ++;
   }
   i++;
  }
   return verificador;
};

int main(void) {
  char str[50];
  char str2[50];
  printf("Digite uma palavra: ");
  scanf("%s", str);
  printf("Digite outra palavra: ");
  scanf("%s", str2);
  meu_strcmp(str, str2);
  if(meu_strcmp(str, str2) == strlen(str) && meu_strcmp(str, str2) == strlen(str2))
      printf("1 | As palavras sao iguais");
  else  
      printf("0 | As palavras sao diferentes");
return 0;
}