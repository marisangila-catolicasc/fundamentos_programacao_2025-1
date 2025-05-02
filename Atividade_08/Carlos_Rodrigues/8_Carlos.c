#include <stdio.h>

int main() {
    int vetor[10], numero, encontrado = 0;

    for (int x = 0; x < 10; x++) {
        printf("Digite o %dº número: ", x + 1);
        scanf("%d", &vetor[x]);
    }

    printf("\nDigite um número: ");
    scanf("%d", &numero);

    for (int x = 0; x < 10; x++) {
        if (vetor[x] == numero) {
            printf("\nO número encontrado está na %dº linha\n",x + 1);
            encontrado = 1;
        }
    }
    
    if (!encontrado) {
        printf(" O número não foi encontrado\n");
    }

    return 0;
}
