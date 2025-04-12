#include <stdio.h>

int main(){

    int numero;
    int pares = 0;
    int impares = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Informe um numero: ");
        scanf("%d", &numero);

        if (numero % 2 == 0){
            pares++;
        }else{
            impares++;
        }
    }
    printf("Voce tem %d numeros pares e %d numeros impares", pares, impares);

    return 0;
}