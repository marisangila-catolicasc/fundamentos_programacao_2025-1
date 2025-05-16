#include <stdio.h>

int meu_strcpy(char *str, char *str2){
  int i = 0;
  while(str[i] != '\0'){
    str2[i] = str[i];
    i++;
  }
  return *str;
}
int main(void) {
  char str[50], str2[50];
  printf("Insira uma palavra: ");
  scanf("%s", str);
  meu_strcpy(str, str2);
  printf("\nCopia da string: %s", str2);
  
return 0;
}