#include <stdlib.h>
#include <stdio.h>
int main() {
    int resultado;
    for (int contador = 15; contador <= 200; contador++)
    {
        resultado = contador * contador;
        printf("O quadrado de %d e %d\n", contador, resultado);
    }
    
    return 0;
}