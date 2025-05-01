#include <stdio.h>

int main(void){
    int ns;

    printf("Numero de elementos no vetor A: ");
    scanf("%d", &ns);

    int inteiroA[ns];
    int index = 0;

    int numero;

    for(int i = 0; i < ns; i++){
        printf("Numero(%d): ", i + 1);
        scanf("%d", &numero);

        inteiroA[index] = numero;
        index++;
    }

    int nsB;

    printf("Numero de elementos no vetor B: ");
    scanf("%d", &nsB);

    int inteirosB[nsB];
    int indexB = 0;

    int numB;

    for(int i = 0; i < nsB; i++){
        printf("Numero(%d): ", i + 1);
        scanf("%d", &numB);

        inteirosB[indexB] = numB;
        indexB++;
    }

    int nv = ns + nsB;

    int novoVetor[nv];
    int idxV = 0;

    int menor = (ns < nsB) ? ns : nsB;

    for(int i = 0; i < 2 * menor; i++){
        int novoI = i / 2;
        if((i % 2) == 0){
            novoVetor[i] = inteiroA[novoI];
            idxV++;
        }else{
            novoVetor[i] = inteirosB[novoI];
            idxV++;
        }
    }

    if(ns > nsB){
        for(int i = 2 * menor; i < nv; i++){
            novoVetor[i] = inteiroA[i - menor];
        }
    }else if(nsB > ns){
        for(int i = 2 * menor; i < nv; i++){
            novoVetor[i] = inteirosB[i - menor];
        }
    }

    for(int i = 0; i < nv; i++){
        if(i == 0){
            printf("\nElementos: %d, ", novoVetor[i]);
        }else if(i == nv - 1){
            printf("%d.", novoVetor[i]);
        }else{
            printf("%d, ", novoVetor[i]);
        }
    }
}