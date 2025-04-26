#include <stdio.h>

/*
Fa¸ca um programa que leia um vetor de 10 n´umeros inteiros e exiba-os na tela na
ordem de entrada e em ordem inversa.
*/
int main() {
    int vetor[10];

    for (int i = 0; i < 10; i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &vetor[i]);
        printf("\n");
    }

    printf("Numeros na ordem de entrada: \n");
    for (int i = 0; i < 10; i++){
        printf("%d, ", vetor[i]);
    }

    printf("\nNumeros na ordem inversa: \n");
    for (int i = 9; i >= 0; i--){
        printf("%d, ", vetor[i]);
    }    
    return 0; 
}

