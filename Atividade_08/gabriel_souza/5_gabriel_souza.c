#include <stdio.h>

/*
Fa¸ca um programa que leia um leia 5 n´umeros em um vetor A, mais 5 n´umeros em
outro vetor B. Armazene a soma dos elementos dos vetores A e B em um terceiro
vetor C. Ex.: vetorC[1] = vetorA[1] + vetorB[1]. Mostre as somas armazenadas no
vetor C ao final.
*/
int main() {
    int lenVetor = 5;
    int A[lenVetor], B[lenVetor], C[lenVetor], i;

    for (i = 0; i < 5; i++){
        printf("Digite o valor de A[%d]: ", i);
        scanf("%d", &A[i]);
        printf("Digite o valor de B[%d]: ", i);
        scanf("%d", &B[i]);
        C[i] = A[i] + B[i];
        printf("A soma de A[%d] + B[%d] = %d\n", i, i, C[i]);
        printf("\n");
    }
    printf("Vetor C: ");
    for (i = 0; i < 5; i++){
        printf("%d, ", C[i]);
    }
    
    return 0; 
}

