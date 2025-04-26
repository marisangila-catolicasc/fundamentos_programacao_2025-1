#include <stdio.h>

/*
Fa¸ca um programa que leia um vetor de 10 elementos e armazene um segundo vetor
com os mesmos elementos em ordem inversa.
*/
int main() {
    int lenVetor = 10;
    int vetor[lenVetor];
    int vetorInverso[lenVetor];
    int i, j;

    for (i = 0; i < lenVetor; i++){
        printf("Digite o %d valor: ", i+1);
        scanf("%d", &vetor[i]);
        vetorInverso[lenVetor - i - 1] = vetor[i];
        printf("\n");
    }
    printf("Vetor Inverso: \n");
    for (j = 0; j < lenVetor; j++){
        printf("%d, ", vetorInverso[j]);
    }
       
    return 0; 
}

