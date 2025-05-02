#include <stdio.h>

int main() {
    int elementos;
    
    printf("Informe quantos valores o vetor deve conter: ");
    scanf("%d", &elementos);

    int vetor[elementos];
    float soma = 0;
    
    for (int i = 0; i < elementos; i++) {
        printf("Insira o valor número %d: ", i + 1);
        scanf("%d", &vetor[i]);
        
        soma += vetor[i];
    }

    float media;
    media = soma / elementos;
    
    printf("Média calculada: %.2f\nNúmeros acima da média:\n", media);

    for (int i = 0; i < elementos; i++) {
        if (vetor[i] > media) {
            printf("%d\n", vetor[i]);
        }
    }

    return 0;
}