#include <stdio.h>

int meu_strcmp(char *str1, char *str2){

int i= 0;
  
  while(str1[i] != '\0' && str2[i] != '\0'){
    if(str1[i] != str2[i]){
      printf("Sao diferentes!");
      return 0;
    }
    i++;
  }
  if(str1[i] == '\0' && str2[i] == '\0'){
    printf("Sao iguais!");
    return 1;
  } else{
    printf("Sao diferentes!");
    return 0;
  }
}

int main(){

char pala[100], palavra[100];

  printf("Digite duas strings: \n");
  scanf("%s", pala);
  scanf("%s", palavra);

  meu_strcmp(pala, palavra);

  return 0;
}  