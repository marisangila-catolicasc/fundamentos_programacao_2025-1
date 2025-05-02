#include <stdio.h>

int main() {
    int elementos;
    
    printf("Digite quantos elementos o vetor terá: ");
    scanf("%d", &elementos);

    float vetor[elementos], soma = 0.0;

    for (int i = 0; i < elementos; i++) {
        printf("Digite o valor do %d elemento: ", i + 1);
        scanf("%f", &vetor[i]);
        soma += vetor[i];
    }

    float media = soma / elementos;
    printf("A media dos valores digitados é: %.2f\n", media);



    return 0;
}