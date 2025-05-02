#include <stdio.h>

int main() {
    int vetor[20];
    int tamanho_vetor = sizeof(vetor) / sizeof(vetor[0]);
    int numero, contador = 0;

    for (int i = 0; i < tamanho_vetor; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Digite um numero para ver quantas vezes ele aparece no vetor: ");
    scanf("%d", &numero);

    for (int i = 0; i < tamanho_vetor; i++) {
        if (vetor[i] == numero) {
            contador++;
        }
    }

    printf("\nO numero digitado aparece %d vezes no vetor.", contador);

    return 0;
}
