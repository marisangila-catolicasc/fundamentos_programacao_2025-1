#include <stdio.h>

//11. Faça um programa que leia um vetor de 15 numeros e exiba a soma dos elementos que estão em posições ımpares.

int main() {
int vetor[15];
int i;
int soma = 0;

    
    printf("Digite 15 numeros:\n");
    for (i = 0; i < 15; i++) {
        scanf("%d", &vetor[i]);
        if (i % 2 != 0) {
            soma += vetor[i];
        }
    }
        printf("A soma dos elementos nas posicoes impares e: %d\n", soma);
  
    
return 0;
}