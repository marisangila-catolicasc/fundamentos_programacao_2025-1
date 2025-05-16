#include <stdio.h>

int verifica_vetores_iguais(int v1[], int v2[], int tamanho);

int main(void) {
    int ns;

    printf("Numero de elementos no vetor A: ");
    scanf("%d", &ns);

    int inteiroA[ns];

    for (int i = 0; i < ns; i++) {
        printf("Numero(%d): ", i + 1);
        scanf("%d", &inteiroA[i]);
    }

    int nsB;

    printf("Numero de elementos no vetor B: ");
    scanf("%d", &nsB);

    int inteirosB[nsB];

    for (int i = 0; i < nsB; i++) {
        printf("Numero(%d): ", i + 1);
        scanf("%d", &inteirosB[i]);
    }

    if (ns != nsB) {
        printf("Not iguais\n");
        return 0;
    }

    int igualidade = verifica_vetores_iguais(inteiroA, inteirosB, ns);

    if (igualidade == 1) {
        printf("Iguais\n");
    } else {
        printf("Not iguais\n");
    }

    return 0;
}

int verifica_vetores_iguais(int v1[], int v2[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (v1[i] != v2[i]) {
            return 0;
        }
    }
    return 1;
}
