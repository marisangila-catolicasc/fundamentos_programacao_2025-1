#include <stdio.h>
#include <string.h>
int verifica_palindromo(char *str){
   int i = 0, j = 0;
      while( str[j] != '\0'){
        j++;
      }
      j--;
  while(i < j){
    if(str[i] != str[j])
      return 0;
    i++;
    j--;
    }
    return 1;
  }

int main(void) {
  char str[10];
  printf("Insira uma palavra: ");
  scanf("%s", str);
  if(verifica_palindromo(str) == 1)
    printf("\nA string eh um palindromo");
  else
    printf("\nA string nao eh um palindromo");

return 0;
}