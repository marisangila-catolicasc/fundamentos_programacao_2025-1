#include <stdio.h>

int main() {
    int vetor[10], n, encontrado = 0;
    
    printf("Informe 10 números:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("\nDigite o número que deseja localizar: ");
    scanf("%d", &n);

    for (int i = 0; i < 10; i++) {
        if (vetor[i] == n) {
            printf("\nNúmero encontrado na posição %d\n", i);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Número não encontrado no vetor.\n");
    }

    return 0;
}