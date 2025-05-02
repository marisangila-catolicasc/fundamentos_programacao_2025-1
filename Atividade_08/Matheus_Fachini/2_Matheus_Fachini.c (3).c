#include <stdio.h>

int main() {
    int elementos;
    
    printf("Digite quantos elementos o vetor terá: ");
    scanf("%d", &elementos);

    int vetor[elementos];
    float soma;
    
    for (int i = 0; i < elementos; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
        
        soma += vetor[i];
    }

    float media;
    media = soma / elementos;
    
    printf("Media: %.2f\n Valores acima da media:\n", media);

    for (int i = 0; i < elementos; i++) {
        if (vetor[i] > media) {
            printf("%d\n", vetor[i]);
        }
    }

    return 0;
}