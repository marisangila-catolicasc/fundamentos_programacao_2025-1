#include <stdio.h>

int verifica_vetores_iguais(int *vet1, int *vet2, int tamanho) {
    for (int *p1 = vet1, *p2 = vet2; p1 < vet1 + tamanho; p1++, p2++) {
        if (*p1 != *p2) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int tamanho;
    
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &tamanho);
    
    int vet1[tamanho], vet2[tamanho];
    
    printf("Digite os elementos do primeiro vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i+1);
        scanf("%d", &vet1[i]);
    }
    
    printf("Digite os elementos do segundo vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i+1);
        scanf("%d", &vet2[i]);
    }
    
    if (verifica_vetores_iguais(vet1, vet2, tamanho)) {
        printf("Os vetores são iguais\n");
    } else {
        printf("Os vetores são diferentes\n");
    }
    
    return 0;
}