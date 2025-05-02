#include <stdio.h>

int main() {
    int vetor[10];
    int tamanho_vetor = sizeof(vetor) / sizeof(vetor[0]);
    int numero, encontrado = 0;

    for (int i = 0; i < tamanho_vetor; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nDigite um numero para procurar dentro do vetor: ");
    scanf("%d", &numero);

    for (int i = 0; i < tamanho_vetor; i++) {
        if (vetor[i] == numero) {
            printf("Numero %d encontrado na posição %d.\n", numero, i);
            encontrado = 1;
        }
    }

    if (encontrado == 0) {
        printf("Numero %d não foi encontrado no vetor.", numero);
    }


    return 0;
}