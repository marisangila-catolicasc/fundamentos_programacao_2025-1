#include <stdio.h>

int main() {
    int lenVetor = 20;
    int vetor[lenVetor];
    int i, pares = 0;

    for (i = 0; i < lenVetor; i++){    
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 == 0){
            pares++;
        }
    }

    printf("Pares: %d\n", pares);
    printf("Impares: %d\n", i - pares);
   
    return 0; 
}

