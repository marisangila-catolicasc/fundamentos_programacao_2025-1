#include <stdio.h>

int main() {
    int vetor[10], numero, encontrado = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for (int i = 0; i < 10; i++) { // <- corrigido aqui
        if (vetor[i] == numero) {
            printf("Numero encontrado na posição: %d\n", i + 1);
            encontrado = 1;
        }
    }

    if (!encontrado) {
        printf("Numero nao encontrado\n");
    }

    return 0;
}
