#include <stdio.h>

int main() {
    int numero;
    printf("Digite um numero e eu direi se e negativo ou positivo!\n");
    scanf(" %d", &numero);

    if (numero >= 0){
        printf("Positivo");
    } else {
        printf("Negativo");
    }
    return 0;
}  