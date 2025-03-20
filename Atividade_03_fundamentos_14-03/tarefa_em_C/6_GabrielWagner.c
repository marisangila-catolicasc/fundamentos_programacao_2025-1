#include <stdio.h>

int main() {
    int numero;
    
    printf("Numero?\n");
    scanf("%d", &numero);

    printf("Numero: ");
    printf("%d", numero);
    printf("\n");

    printf("Antes: ");
    printf("%d", numero - 1);
    printf("\n");

    printf("Depois: ");
    printf("%d", numero + 1);
    printf("\n");

    return 0;
}
