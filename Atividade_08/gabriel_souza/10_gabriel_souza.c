#include <stdio.h>

/*
Fa¸ca um programa que leia um vetor de 20 n´umeros e pe¸ca um n´umero ao usu´ario.
Conte quantas vezes esse n´umero aparece no vetor.
*/
int main() {
    int vetor[20], i, numero, cont = 0;

    for (i = 0; i < 20; i++){
        printf("Digite o %d numero: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("Digite o numero que deseja procurar: ");
    scanf("%d", &numero);
    for (i = 0; i < 20; i++){
        if (vetor[i] == numero){
            cont++;
            printf("O numero %d foi encontrado na posicao %d\n", numero, i);
        }
    }
    printf("O numero %d foi encontrado %d vezes\n", numero, cont);
    
    return 0; 
}

