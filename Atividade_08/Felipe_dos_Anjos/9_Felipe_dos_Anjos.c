#include <stdio.h>

int main() {
    int vetor[20];
    int numero, contador = 0;
    
    printf("Informe 20 números inteiros:\n");
    for (int i = 0; i < 20; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    
    printf("\nDigite um número para contar no vetor: ");
    scanf("%d", &numero);
    
    for (int i = 0; i < 20; i++) {
        if (vetor[i] == numero) {
            contador++;
        }
    }
    
    printf("O número %d aparece %d vez(es) no vetor.\n", numero, contador);
    
    return 0;
}