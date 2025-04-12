#include <stdio.h>
int main(){
    int numero, maior;
    numero = 0;
    maior = 0;
    for( int contador =0; contador<10; contador ++)
{
    printf("Insira um numero \n");
    scanf("%d", &numero);    
    
        {
          if (numero > maior)
          {
            maior = numero;
          }else {
            continue;
          }
        }      
}
    printf("%d e o mairo numero.", maior);

}    
