#include <stdio.h>

/*
Fa¸ca um programa que leia um vetor de float e determine a m´edia de seus valores
*/
int main() {

    float vetor[3];
    float soma = 0, media = 0;
    
    for (int i = 0; i < 3; i++){
        printf("Digite o valor da %da nota:\n", i+1);
        scanf("%f", &vetor[i]);
    }
    for (int i = 0; i < 3; i++){
        soma += vetor[i];
    }
    media = soma / 3;    
    printf("\nA media das notas eh: %.2f", media);
    
    return 0; 
}

