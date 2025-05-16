#include <stdio.h>

int verifica_palindromo(const char *str){
  int inicio = 0;
  int fim = 0;


while (str[fim] != '\0'){
    fim ++;
  }
  fim --;


while(inicio < fim){
  if(str[inicio] != str[fim]){
    return 0;
  }
  inicio++;
  fim--;
}
  
  return 1;
}

int main(){
  char palavra1[]= "ovo";
  char palavra2[]= "teste";

printf("A palavra '%s' é um palíndromo? %d\n", palavra1, verifica_palindromo(palavra1));
printf("A palavra '%s' é um palíndromo? %d\n", palavra2, verifica_palindromo(palavra2));

  return 0;
}
