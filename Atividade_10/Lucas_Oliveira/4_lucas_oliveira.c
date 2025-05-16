#include <stdio.h>
#include <string.h>
int meu_strcmp(char *str, char *str2){
  int i = 0, verifica = 0;
  while(str[i] != '\0'){
    if (str2[i] == str[i])
      verifica++;
    i++;
  }
  if (verifica == i)
    return 1;
  else
    return 0;
}
int main(void) {
  char str[50], str2[50];
  printf("Insira uma palavra: ");
  scanf("%s", str);
  printf("Insira outra palavra: ");
  scanf("%s", str2);
  if(meu_strcmp(str, str2) == 1 && strlen(str) == strlen(str2))
    printf("As strings são iguais");
  else
    printf("As strings são diferentes");
  
return 0;
}