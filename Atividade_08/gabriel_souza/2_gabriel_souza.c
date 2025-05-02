#include <stdio.h>

/*
Fa¸ca um programa que encontre o maior e o menor valor de um vetor
*/
int main() {
    int vetor[10] = {54, 23, 12, 45, 65, 87, 90, 4, 32, 63};
    int maior, menor;


    menor = vetor[0];
    maior = vetor[0];
    for (int i = 0; i < 10; i++){
        if (vetor[i] > maior){
            maior = vetor[i];
        }else if (vetor[i] < menor){
            menor = vetor[i];
        }
    }
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    return 0; 
}

