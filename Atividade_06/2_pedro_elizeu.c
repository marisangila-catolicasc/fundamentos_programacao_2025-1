#include <stdio.h>

int main() {
    int numero;
    
    printf("Numeros quadrados inteiros na faixa 15 - 200:\n\n");
    
    for(numero = 15; numero <= 200; numero++) {
        printf("%d² = %d\n", numero, numero * numero);
    }
    
    return 0;
}