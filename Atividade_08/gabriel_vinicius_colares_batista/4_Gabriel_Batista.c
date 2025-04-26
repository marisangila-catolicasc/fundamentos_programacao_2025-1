#include <stdio.h>

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

    printf("\nNumeros na ordem contrária: \n");
    for (int i = 9; i >= 0; i--){
        printf("%d, ", vetor[i]);
    }    
    return 0; 
}

