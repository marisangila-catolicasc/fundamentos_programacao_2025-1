#include <stdio.h>

int main() {
    int vetor[100];
    int tamanho;

    printf("Digite o tamanho do vetor (até 100): ");
    scanf("%d", &tamanho);
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < tamanho; i++){
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    int maior = vetor[0];
    int menor = vetor[0];

    for (int i = 1; i < tamanho; i++){
        if (vetor[i] > maior){
            maior = vetor[i];
        }
        if (vetor[i] < menor){
            menor = vetor[i];
        }
    }
    printf("\nO maior valor é: %d\n", maior);
    printf("O menor valor é: %d\n", menor);
    
    return 0;
}