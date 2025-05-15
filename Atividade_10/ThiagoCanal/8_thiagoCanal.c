#include <stdio.h>

int verifica_vetores_iguais(int v1[], int v2[], int t1);

int main(void){
    int ns;

    printf("Numero de elementos no vetor A: ");
    scanf("%d", &ns);

    int inteiroA[ns];

    int numero;

    for(int i = 0; i < ns; i++){
        printf("Numero(%d): ", i + 1);
        scanf("%d", &numero);

        inteiroA[i] = numero;
    }

    int nsB;

    printf("Numero de elementos no vetor B: ");
    scanf("%d", &nsB);

    int inteirosB[nsB];

    int numB;

    for(int i = 0; i < nsB; i++){
        printf("Numero(%d): ", i + 1);
        scanf("%d", &numB);

        inteirosB[i] = numB;
    }
    int igualidade;

    if(ns > nsB){
        igualidade = verifica_vetores_iguais(inteiroA, inteirosB, ns);
    }else{
        igualidade = verifica_vetores_iguais(inteiroA, inteirosB, nsB);
    }

    if(igualidade == 0){
        printf("Not iguais");
    }else{
        printf("Iguais");
    }
}

int verifica_vetores_iguais(int v1[], int v2[], int t1){
    for(int i = 0; i < t1; i++){
        if(v1[i] != v2[i]){
            return 0;
        }
    }
    return 1;
}