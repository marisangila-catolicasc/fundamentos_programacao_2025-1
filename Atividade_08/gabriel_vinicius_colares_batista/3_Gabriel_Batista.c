#include <stdio.h>
int main() {
    int soma = 0, lVetor;
    float media;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &lVetor);
    int vetor[lVetor];

    for (int i = 0; i < lVetor; i++){
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }
    media = soma / lVetor;
    printf("A media dos valores do vetor e: %.2f\n", media);
    printf("Os valores acima da media são: ");
    for (int i = 0; i < lVetor; i++){
        if (vetor[i] > media){
            printf("%d, ", vetor[i]);
        }
    }
    
    
    return 0; 
}

