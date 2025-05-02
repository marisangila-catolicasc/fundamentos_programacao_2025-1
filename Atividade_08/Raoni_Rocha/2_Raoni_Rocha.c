
#include <stdio.h>

int main() {
    int n;
    float soma = 0.0;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    float vetor[n];
    
    printf("Digite %d valores:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%f", &vetor[i]);
        soma += vetor[i];
    }
    
    float media = soma / n;
    float maior = vetor[0];
    float menor = vetor[0];
    
    for(int i = 1; i < n; i++) {
        if(vetor[i] > maior) {
            maior = vetor[i];
        }
        if(vetor[i] < menor) {
            menor = vetor[i];
        }
    }
    
    printf("A media e: %.2f\n", media);
    printf("O maior valor e: %.2f\n", maior);
    printf("O menor valor e: %.2f\n", menor);
    
    return 0;
}
