#include <stdio.h>

int main() {
    int vetor[20];
    int numero, contador = 0;
    
    printf("Digite 20 numeros inteiros:\n");
    for (int i = 0; i < 20; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    
    printf("\nDigite um numero para contar no vetor: ");
    scanf("%d", &numero);
    
    for (int i = 0; i < 20; i++) {
        if (vetor[i] == numero) {
            contador++;
        }
    }
    
    printf("O numero %d aparece %d vezes no vetor.\n", numero, contador);
    
    return 0;
}