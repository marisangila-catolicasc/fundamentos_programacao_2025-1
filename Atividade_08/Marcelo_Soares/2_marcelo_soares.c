#include <stdio.h>

//2. Faca um programa que encontre o maior e o menor valor de um vetor.

int main(){
    float vetor [5];
    int i;
    float maior, menor;

    for(i=0; i<5; i++){
        printf("Digite um numero: ");
        scanf("%f", &vetor[i]);
    }
    maior = vetor[0];
    menor = vetor[0];
    
    for(i=0; i<5; i++){
        if (vetor[i]> maior){
            maior = vetor[i];
        }
        if (vetor[i]< menor){
            menor = vetor[i];
        }
    }

    printf("O maior valor eh: %.2f\n", maior);
    printf("O menor valor eh: %.2f\n", menor);
    
    return 0;
}
