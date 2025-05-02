#include <stdio.h>

int main() {
    int tamanho, i;
    float soma = 0.0, media;

   
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

   
    float vetor[100];

   
    if (tamanho <= 0 || tamanho > 100) {
        printf("Tamanho inválido. Insira um valor entre 1 e 100.\n");
        return 1;
    }

   
    for (i = 0; i < tamanho; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &vetor[i]);
        soma += vetor[i]; // Soma os elementos
    }

    
    media = soma / tamanho;

   
    printf("A média dos valores é: %.2f\n", media);

    return 0;
}
