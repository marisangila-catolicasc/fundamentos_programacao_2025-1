#include <stdio.h>

/*
Fa¸ca um programa que leia um vetor de 15 n´umeros e exiba a soma dos elementos
que est˜ao em posi¸c˜oes ´ımpares.
*/
int main() {
   int vetor[15], i, soma = 0;

    for (i = 0; i < 15; i++){
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
        if (i % 2 != 0){
            soma += vetor[i];
        }
    }
    printf("Soma dos elementos em posicoes impares: %d\n", soma);
    
    return 0; 
}

