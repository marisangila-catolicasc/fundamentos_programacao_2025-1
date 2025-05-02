#include <stdio.h>

int main() {
    int vetor[20], numero, contador = 0;

    for (int i = 0; i < 20; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\n\n Digite o número para buscar: ");
    scanf("%d", &numero);

    for (int i = 0; i < 20; i++) {
        if (vetor[i] == numero) {
            contador++;
        }
    }

    printf("O número %d aparece %d vezes\n", numero, contador);
    return 0;
}
