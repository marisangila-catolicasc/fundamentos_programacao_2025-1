#include <stdio.h>

int main() {
    int tamanho, i;
    float vetor[100];
    float maior, menor;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
  
    if (tamanho <= 0 || tamanho > 100) {
        printf("Tamanho inválido. Insira um valor entre 1 e 100.\n");
        return 1;
    }
    
    for (i = 0; i < tamanho; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }
    
    maior = menor = vetor[0];
   
    for (i = 1; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    printf("Maior valor: %.2f\n", maior);
    printf("Menor valor: %.2f\n", menor);

    return 0;
}
