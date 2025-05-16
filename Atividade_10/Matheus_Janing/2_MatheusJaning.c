#include <stdio.h>

void meu_strcat(char *dest, char *font){

  int i = 0;
  int j = 0;

  while(dest[i] != '\0'){
    i++;
  }

  while(font[j] != '\0'){
    dest[i] = font[j];
    i++;
    j++;
  }

  printf("%s", dest);
}

int main(){
  char string1[100], string2[100];

  printf("Digite duas strings: \n");
  scanf("%s", string1);
  scanf("%s", string2);

  meu_strcat(string1, string2);

  return 0;
}