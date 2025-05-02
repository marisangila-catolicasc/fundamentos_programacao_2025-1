#include <stdio.h>

//4. Faca um programa que leia um vetor de 10 numeros inteiros e exiba-os na tela na ordem de entrada e em ordem inversa.

int main(){
    int vetor [10];
    int i;

    printf("Digite 10 numeros inteiros:\n");
    for (i=0; i < 10; i++){
        scanf("%d", &vetor[i]);
        }

        for (i=0; i < 10; i++){
            printf("A ordem dos numeros digitados sao: %d\n", vetor[i]);
        }

        for (i=9 ; i >= 0; i--){
            printf("Ordem inversa dos numeros: %d\n", vetor[i]);
        }

    return 0;
}
