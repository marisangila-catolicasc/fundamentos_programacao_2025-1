#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
int meu_strcmp(char *strA, char *strB){
  int verific = 0;
  int i = 0;
  while(strA[i] != '\0' && strB[i] != '\0'){
    if(strA[i] == strB[i]){
        verific ++;
   }
   printf("%d \n",verific);
   i++;
  }
   return verific;
};

int main(void) {
  char strA[50];
  char strB[50];
  printf("Digite uma palavra: ");
  scanf("%s", strA);
  printf("Digite outra palavra: ");
  scanf("%s", strB);
  meu_strcmp(strA, strB);
      if(meu_strcmp(strA, strB) == strlen(strA) && meu_strcmp(strA, strB) == strlen(strB))
      printf("1 | As palavras sao iguais");
  else  
      printf("0 | As palavras sao diferentes");
return 0;
}