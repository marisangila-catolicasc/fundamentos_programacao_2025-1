#include <stdio.h>

int main() {
    int elementos;
    
    printf("Informe a quantidade de itens no vetor: ");
    scanf("%d", &elementos);

    float vetor[elementos], soma = 0.0;

    for (int i = 0; i < elementos; i++) {
        printf("Insira o valor do elemento %d: ", i + 1);
        scanf("%f", &vetor[i]);
        
        soma += vetor[i];
    }

    float media = soma / elementos;
    printf("A média dos números informados é: %.2f\n", media);

    return 0;
}