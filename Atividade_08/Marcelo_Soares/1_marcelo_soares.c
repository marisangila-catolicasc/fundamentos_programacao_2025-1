#include <stdio.h>
#include <stdlib.h>

//1. Faca um programa que leia um vetor de float e determine a media de seus valores.

int main(){
    float vetor[5];
    float media = 0;

    for(int i = 0; i < 5; i++){
        printf("Digite um numero: ");
        scanf("%f", &vetor[i]);
        media += vetor[i];
    }    
    media = media / 5;
    printf("a media dos valores e: %.2f\n", media);
    
    return 0;
}
