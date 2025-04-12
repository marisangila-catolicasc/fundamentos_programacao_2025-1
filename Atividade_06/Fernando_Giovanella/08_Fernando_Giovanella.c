#include <stdio.h>

int main(){

    int numero, maior = -99999;

    printf("Informe 10 numeros inteiros: \n");
    for (int i = 0; i < 10; i++){
        scanf("%d", &numero);

        if(numero > maior){
            maior = numero;
        }
    }
    
    printf("O maior numero digitado eh %d", maior);

    return 0;
}