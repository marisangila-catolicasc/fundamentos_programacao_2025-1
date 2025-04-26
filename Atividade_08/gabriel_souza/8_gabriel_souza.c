#include <stdio.h>

/*
Fa¸ca um programa que leia um vetor de 10 n´umeros e pergunte ao usu´ario um
n´umero. Informe se esse n´umero est´a presente no vetor e em qual posi¸c˜ao.
*/
int main() {
    int lenVetor = 10;
    int vetor[lenVetor];
    int i, numero;

    for (i = 0; i < lenVetor; i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &vetor[i]);
        printf("\n");
    }
    printf("Digite um numero para verificar se ele esta no vetor: ");
    scanf("%d", &numero);
    printf("\n");

    for (i = 0; i < lenVetor; i++){
        if (vetor[i] == numero){
            printf("O numero %d esta na posicao %d do vetor.\n", numero, i);
            break;
        }else{
            printf("O numero %d nao esta no vetor.\n", numero);
            break;       
        }
    }
    return 0; 
}

