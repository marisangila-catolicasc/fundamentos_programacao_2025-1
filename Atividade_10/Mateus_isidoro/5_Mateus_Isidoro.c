#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
int verificar_palindromos(char *str){
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

int main(void){
    char str[50];
    printf("Digite uma palavra: ");
    scanf("%s", str);
    printf("1 = palindromo\n0 = nao palindromo \nResultado = %d\n", verificar_palindromos(str));
    return 0;
}