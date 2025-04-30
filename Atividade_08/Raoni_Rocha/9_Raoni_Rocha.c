#include <stdio.h>
#define TAMANHO 5

void lerVetor(int vetor[], const char* nome) {
    printf("Digite os elementos do vetor %s:\n", nome);
    for (int i = 0; i < TAMANHO; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
   }
}

void intercalarVetores(int vetor1[], int vetor2[], int vetorIntercalado[]) {
    for (int i = 0; i < TAMANHO; i++) {
        vetorIntercalado[i * 2] = vetor1[i];
        vetorIntercalado[i * 2 + 1] = vetor2[i];
    }
}

int main() {
    int vetor1[TAMANHO], vetor2[TAMANHO], vetorIntercalado[TAMANHO * 2];

    lerVetor(vetor1, "A");
    lerVetor(vetor2, "B");

    intercalarVetores(vetor1, vetor2, vetorIntercalado);

    printf("Vetor intercalado: ");
    for (int i = 0; i < TAMANHO * 2; i++) {
        printf("%d ", vetorIntercalado[i]);
    }
    printf("\n");

    return 0;
}