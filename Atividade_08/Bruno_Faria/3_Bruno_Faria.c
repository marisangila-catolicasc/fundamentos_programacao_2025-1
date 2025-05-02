#include <stdio.h>

int main() {
    int vetor[100];
    int tamanho, i, soma = 0, acima_da_media = 0;
    float media;

    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    if (tamanho <= 0 || tamanho > 100) {
        printf("Tamanho inválido. Insira um valor entre 1 e 100.\n");
        return 1;
    }

    for (i = 0; i < tamanho; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }


    media = (float)soma / tamanho;

    printf("\nMédia dos valores: %.2f\n", media);

    printf("Valores acima da média:\n");
    for (i = 0; i < tamanho; i++) {
        if (vetor[i] > media) {
            printf("%d ", vetor[i]);
            acima_da_media++;
        }
    }

    if (acima_da_media > 0) {
        printf("\nTotal de valores acima da média: %d\n", acima_da_media);
    } else {
        printf("Nenhum valor acima da média.\n");
    }

    return 0;
}
