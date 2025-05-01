#include <stdio.h>

int main() {
    int vetor[10], numero, i;
    int encontrado = 0;

    printf("Digite 10 números inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Digite o número que você quer procurar: ");
    scanf("%d", &numero);

    for (i = 0; i < 10; i++) {
        if (vetor[i] == numero) {
            printf("Número encontrado na posição %d.\n", i + 1);  
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Número não encontrado no vetor.\n");
    }

    return 0;
}
