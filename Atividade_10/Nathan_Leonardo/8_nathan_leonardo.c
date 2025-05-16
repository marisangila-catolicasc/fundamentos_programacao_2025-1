#include <stdio.h>

int verifica_vetores_iguais(int vet1[], int vet2[], int tamanho) {
    int i;

    for (i = 0; i < tamanho; i++) {
        if (vet1[i] != vet2[i]) {
            return 0; 
        }
    }

    return 1; 
}

int main() {

    int vetor1[5] = {1, 2, 3, 4, 5};
    int vetor2[5] = {1, 2, 3, 4, 5};

    int tamanho = 5;

    if (verifica_vetores_iguais(vetor1, vetor2, tamanho)) {
        printf("Vetor1 e Vetor2 são iguais.\n");
    } else {
        printf("Vetor1 e Vetor2 são diferentes.\n");
    }

    return 0;
}
