#include <stdio.h>

int main() {
    int vetor[10];
    int numero, encontrado = 0;

    printf("Digite 10 numeros:\n");
    for (int i = 0; i < 10; i++){
        printf("vetor[%d] = ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\nDigite um numero para buscar: ");
    scanf("%d", &numero);

    for (int i = 0; i < 10; i++){
        if (vetor[i] == numero){
            printf("Numero encontrado na posicao %d\n", i);
            encontrado = 1;
        }
    }

    if (!encontrado){
        printf("Numero nao encontrado no vetor.\n");
    }
}