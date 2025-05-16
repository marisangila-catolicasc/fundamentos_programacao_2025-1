#include <stdio.h>

int meu_strcat(char *str, char *str2){
  int i = 0;
  int j = 0;
  while(str[i] != '\0'){
    i++;
  }
  while(str2[j] != '\0'){
    str[i] = str2[j];
    i++;
    j++;
  }
  return *str;
}
int main(void) {
  char str[50], str2[50];
  printf("Insira uma palavra: ");
  scanf("%s", str);
  printf("Insira outra palavra: ");
  scanf("%s", str2);
  meu_strcat(str, str2);
  printf("\nConcatenacao das string: %s", str);
  
return 0;
}