#include <stdio.h>
int main(){
    int soma;
    soma = 0;
    for( int contador =0; contador<=100; contador ++)
{
        soma += contador;
        printf(" %d \n", soma);
}
    printf("A soma dos 100 primeiros numeros naturais e de %d", soma);
    return 0;
}    
