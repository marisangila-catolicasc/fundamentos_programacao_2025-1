#include <stdlib.h>
#include <stdio.h>
int main(int argc, char const * argv[]) {
    int numero, maior;
    numero = 0;
    maior = 0;
    for (int contador = 0; contador < 10; contador++)
    {
        printf("Digite um numero: ");
        scanf("%d", &numero);
        if(numero > maior){
            maior = numero;
        }else{
            continue;
        }
    }
    printf("o maior numero eh: %d \n", maior);
    return 0;
}