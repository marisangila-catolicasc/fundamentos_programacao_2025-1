#include <stdio.h>
int main() {
    int numeros[10], numerosB[10];
    int i;
    for (i = 0; i < 10; i++) {
        printf("Digite um numero para a lista: ");
        scanf("%d", &numeros[i]);
    }
    printf("Lista B: ");
    for (i = 9; 0 <= i; i--) {
        numerosB[i] = numeros[i];
        printf("%d ", numerosB[i]);
    }

    return 0;
}