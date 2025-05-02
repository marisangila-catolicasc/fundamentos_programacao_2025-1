#include <stdio.h>

int main() {
    int vetor[4];
    int soma = 0;
    int tamanho_vetor = sizeof(vetor) / sizeof(vetor[0]);

    for (int i = 0; i < 4; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    float media = soma / 4;

    printf("\nMedia dos valores: %f\n", media);

    int contador = 0;
    printf("Valores acima da media: ");

    for (int i = 0; i < 4; i++) {
        if (vetor[i] > media) {
            printf("%d ", vetor[i]);
            contador++;
        }
    }

    printf("\nQuantidade de valores acima da media: %d \n", contador);

    return 0;
}
