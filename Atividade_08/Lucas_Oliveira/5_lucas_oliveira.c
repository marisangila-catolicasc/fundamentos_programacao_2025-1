#include <stdio.h>
int main() {
    int numeros[5], numerosB[5], soma[5];
    int i;
    for (i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }
    printf("\nNumeros para segunda lista\n");
    for (i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numerosB[i]);
    }
    for (i = 0; i < 5; i++) {
        soma[i] = numeros[i] + numerosB[i];
        printf("Soma: %d\n", soma[i]);
    }
    return 0;
}