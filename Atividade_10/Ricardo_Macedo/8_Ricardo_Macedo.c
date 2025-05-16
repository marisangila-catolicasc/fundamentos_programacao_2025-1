#include <stdio.h>

int verifica_vetores_iguais(int v1[], int v2[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (v1[i] != v2[i]) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int vetor1[] = {1, 2, 3, 4, 5};
    int vetor2[] = {1, 2, 3, 4, 5};
    int vetor3[] = {1, 2, 3, 0, 5};
    int tamanho = 5;

    printf("vetor1 e vetor2 são iguais? %s\n", verifica_vetores_iguais(vetor1, vetor2, tamanho) ? "Sim" : "Não");
    printf("vetor1 e vetor3 são iguais? %s\n", verifica_vetores_iguais(vetor1, vetor3, tamanho) ? "Sim" : "Não");

    return 0;
}
