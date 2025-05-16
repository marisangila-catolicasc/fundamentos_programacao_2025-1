#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
int meu_strlen(char *str){
  int i = 0;
  while(str[i] != '\0'){
    i++;
  }
  return i;
};



int main(void) {
  char str[50];
  printf("qual seu nome?\n");
  scanf("%s", str);
  printf("seu nome eh %s\n", str);
  printf("seu nome tem %d letras\n", meu_strlen(str));
  
return 0;
}