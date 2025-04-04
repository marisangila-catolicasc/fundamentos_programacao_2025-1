#include <stdio.h>

int main() {
    int numero;
    printf("Digite um numero:\n");
    scanf(" %d", &numero);

    if (numero >= 0){
        printf("Ele eh positivo");
    } else {
        printf("Ele eh negativo");
    }
    return 0;
    
}  