#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
int verifica_palindromo(char *strA){
  int i = 0, j = 0;
    while( strA[j] != '\0')
   {
      j++;
    }
    j--;
while(i < j)
{
  if(strA[i] != strA[j])
    return 0;
  i++;
  j--;
  }
  return 1;
}

int main(){
    char strA[100];
    printf("Digite uma palavra: ");
    scanf("\n%s", strA);
    printf("Se aparecer 1 é palindromo, se aparecer 0 não é palindromo: %d\n", verifica_palindromo(strA));
    return 0;
}


