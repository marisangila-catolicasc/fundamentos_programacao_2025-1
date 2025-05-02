#include <stdio.h>

int main() {
    int n, i, contador = 0;
    float soma = 0.0, media;

    printf("Quantos elementos o vetor tera? ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Tamanho invalido. O vetor deve ter pelo menos um elemento.\n");
        return 1;
    }

    int vetor[n];

    for (i = 0; i < n; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    
    media = soma / n;
    printf("\nMedia dos valores: %.2f\n", media);

    printf("Valores acima da media:\n");
    for (i = 0; i < n; i++) {
        if (vetor[i] > media) {
            printf("%d ", vetor[i]);
            contador++;
        }
    }

    if (contador == 0) {
        printf("Nenhum valor acima da media.\n");
    } else {
        printf("\nTotal de valores acima da media: %d\n", contador);
    }

    return 0;
}
