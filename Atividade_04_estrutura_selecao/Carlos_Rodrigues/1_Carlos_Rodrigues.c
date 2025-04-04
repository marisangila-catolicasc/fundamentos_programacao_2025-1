#include <stdio.h>
int main(){
    
  int idade_pessoa;
    
  printf("Qual sua idade?\n");
    scanf("%d", &idade_pessoa);
 
    if (idade_pessoa >= 18){
        printf("Voce pode dirigir!\n");
    }
    return 0;
}
