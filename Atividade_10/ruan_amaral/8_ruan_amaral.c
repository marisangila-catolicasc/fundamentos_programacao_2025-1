#include <stdio.h>

int verifica_vetores_iguais(int v1[], int v2[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (v1[i] != v2[i]) return 0;
    }
    return 1;
}

int main() {
    int v1[5] = {1, 2, 3, 4, 5}, v2[5] = {1, 2, 3, 4, 5};
    printf("Vetores iguais? %d\n", verifica_vetores_iguais(v1, v2, 5));
    return 0;
}
