#include <stdio.h>

/*
Fa¸ca um programa que leia um vetor de 20 n´umeros inteiros e exiba quantos desses
n´umeros s˜ao pares.
*/
int main() {
    int lenVetor = 20;
    int vetor[lenVetor];
    int i, pares = 0;

    for (i = 0; i < lenVetor; i++){    
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 == 0){
            pares++;
        }
    }

    printf("Pares: %d\n", pares);
    printf("Impares: %d\n", i - pares);
   
    return 0; 
}

