#include <stdio.h>

int main() {
    int numero;
    
    printf("Numeros de 5 em 5 no intervalo de 0 a 100:\n\n");
    
    for(numero = 0; numero <= 100; numero += 5) {
        printf("%d ", numero);
    }
    
    printf("\n");
    return 0;
}