#include <stdio.h>

int main() {
    int vetor[10];
    int numero, encontrado = 0, posicao = -1;

    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nDigite um numero para verificar se esta no vetor: ");
    scanf("%d", &numero);

    for (int i = 0; i < 10; i++) {
        if (vetor[i] == numero) {
            encontrado = 1;
            posicao = i;
            break;
        }
    }

    if (encontrado) {
        printf("O numero %d esta presente no vetor na posicao %d.\n", numero, posicao + 1);
    } else {
        printf("O numero %d nao esta presente no vetor.\n", numero);
    }

    return 0;
}
