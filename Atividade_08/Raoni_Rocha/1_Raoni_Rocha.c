
#include <stdio.h>

int main() {
    
    int n;
    float soma = 0.0;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    float vetor[n];
    
    printf("Digite os %d valores:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%f", &vetor[i]);
        soma += vetor[i];
    }
    
    float media = soma / n;
    printf("A media e: %.2f\n", media);
    
    return 0;
}
