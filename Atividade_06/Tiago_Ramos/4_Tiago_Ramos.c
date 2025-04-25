#include <stdio.h>

int main(){

    int numero;
    int par = 0;
    int impar = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite Um Numero Inteiro: ");
        scanf("%d", &numero);

        if(numero % 2 == 0) {
            par++ ;
        } else {
            impar++ ;
        }
    }

    printf("Numeros Pares: %d Numeros Impars: %d", par, impar);

    return 0;
}