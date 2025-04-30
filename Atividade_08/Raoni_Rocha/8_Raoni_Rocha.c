#include <stdio.h>

int main() {
    int lenVetor = 10;
    int vetor[lenVetor];
    int i, numero;

    for (i = 0; i < lenVetor; i++){
        printf("Digite o %d numero:", i+1);
        scanf("%d", &vetor[i]);
        printf("\n");
    }
    printf("Digite um numero para verificar se ele esta no vetor:");
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