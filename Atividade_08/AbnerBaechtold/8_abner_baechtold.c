#include <stdio.h>

int main() {
    int vetor[10], numero, encontrado = 0;
    printf("Digite 10 numeros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Digite o numero a ser buscado: ");
    scanf("%d", &numero);

    for (int i = 0; i < 10; i++) {
        if (vetor[i] == numero) {
            printf("Numero encontrado na posicao %d\n", i);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Numero nao encontrado no vetor.\n");
    }

    return 0;
}
