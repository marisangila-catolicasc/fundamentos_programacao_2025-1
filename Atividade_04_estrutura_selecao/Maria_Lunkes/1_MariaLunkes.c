#include <stdio.h>

int main() {
    int numero;
    
    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero > 0)
        printf("Numero Positivo!\n");
    else 
        printf(" Numero Negativo!\n");

    return 0;
}