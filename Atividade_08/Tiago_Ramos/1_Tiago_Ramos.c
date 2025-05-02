#include <stdio.h>

int main() {
    float soma = 0;
    float vetor[4];
    flot media;
    
    
    int tamanho_vetor = sizeof(vetor) / sizeof(vetor[0]);

    for (int i = 0; i < tamanho_vetor; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &vetor[i]);
        soma += vetor[i];
    }

    media = soma / tamanho_vetor;

    printf("A média dos valores é: %.2f\n", media);

    return 0;
}