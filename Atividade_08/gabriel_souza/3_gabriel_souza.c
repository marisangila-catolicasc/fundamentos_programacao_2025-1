#include <stdio.h>

/*
Fa¸ca um programa que leia um vetor de inteiros e determine a m´edia de seus valores.
A seguir, o programa deve mostrar na tela quantos e quais os valores que est˜ao acima
da m´edia.
*/
int main() {
    int soma = 0, lenVetor;
    float media;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &lenVetor);
    int vetor[lenVetor];

    for (int i = 0; i < lenVetor; i++){
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }
    media = soma / lenVetor;
    printf("A media dos valores do vetor e: %.2f\n", media);
    printf("Os valores acima da media sao: ");
    for (int i = 0; i < lenVetor; i++){
        if (vetor[i] > media){
            printf("%d, ", vetor[i]);
        }
    }
    
    
    return 0; 
}

