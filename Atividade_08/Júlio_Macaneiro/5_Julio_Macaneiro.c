#include <stdio.h>

int main() {
    int arr1[5], arr2[5], result[5];

   
    printf("Insira 5 números para o primeiro vetor\n");
    for (int i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    
    printf("\ninsira 5 números para o segundo vetor\n");
    for (int i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    
    for (int i = 0; i < 5; i++) {
        result[i] = arr1[i] + arr2[i];
    }

    
    printf("\nO Resultado da soma dos vetores será:\n");
    for (int i = 0; i < 5; i++) {
        printf("Resultado[%d] = %d\n", i + 1, result[i]);
    }

    return 0;
}
