#include <stdio.h>

//8. Faça um programa que leia um vetor de 10 numeros e pergunte ao usuario um numero. Informe se esse numero esta presente no vetor e em qual posiçao.

int main() {
    int vetor[10];
    int i;
    int numero;
    int encontrado = 0;

    for (i = 0; i < 10; i++){
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Digite um número para verificar se está presente no vetor: ");
    scanf("%d", &numero);

    for (i = 0; i < 10; i++)
        if (vetor[i] == numero){
            printf("\nO número %d está presente no vetor na posição %d.\n", numero, i + 1);
            encontrado =1;
            break;
        }  
            
        if (! encontrado){
            printf("\nO número %d não está presente no vetor.\n", numero);
        }
    
    return 0;
}