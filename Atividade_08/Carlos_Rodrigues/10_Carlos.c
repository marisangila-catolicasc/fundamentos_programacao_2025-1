#include <stdio.h>

int main() {
    
    int vetor[20], numero, contador = 0;

    for (int x = 0; x < 20; x++) {
        printf("Digite o %d número: ", x + 1);
        scanf("%d", &vetor[x]);
    }

    printf("\nDigite o número para buscar: ");
    scanf("%d", &numero);

    for (int x = 0; x < 20; x++) {
        if (vetor[x] == numero) {
            contador++;
        }
    }

    printf("O número %d apareceu no total de %d vezes\n", numero, contador);
    return 0;
}
