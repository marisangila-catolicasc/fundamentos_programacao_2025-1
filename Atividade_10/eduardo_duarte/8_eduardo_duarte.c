#include <stdio.h>

int verifica_vetores_iguais(int *vet1, int *vet2, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
    if (vet1[i] != vet2[i]) return 0;
    }
    return 1;
}
int main() {
int v1[] = {1, 2, 3};
int v2[] = {1, 2, 3};
    printf("%d\n", verifica_vetores_iguais(v1, v2, 3));
    
    return 0;
}