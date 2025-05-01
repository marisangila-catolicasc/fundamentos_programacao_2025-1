#include <stdio.h>
#include <stdlib.h>

int somaA(int vetA[], int ns);
int somaB(int vetB[], int ns);

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

    int soma_A = somaA(inteiroA, ns);
    int soma_B = somaB(inteirosB, nsB);

    int vetorC[2] = {soma_A, soma_B};

    printf("Somas de A e de B: ");
    for(int i = 0; i < 2; i++){
        if(i == 1){
            printf("%d.", vetorC[i]);
        }else{
            printf("%d, ", vetorC[i]);
        }
    }
}

int somaA(int vetA[], int ns){
    int soma = 0;

    for(int i = 0; i < ns; i++){
        soma += vetA[i];
    }

    return soma;
}

int somaB(int vetB[], int ns){
    int soma = 0;

    for(int i = 0; i < ns; i++){
        soma += vetB[i];
    }

    return soma;
}
