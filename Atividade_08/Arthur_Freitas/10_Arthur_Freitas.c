#include <stdio.h>

int main() {
    int vetor[20];
    int n, contador = 0;
    
    printf("Digite 20 numeros:\n");
    for (int i = 0; i < 20; i++) {
        
      scanf("%d", &vetor[i]);
    }

    printf("Digite um número pra saber quantas vezes ele aparece no vetor:\n");
    scanf("%d", &n);
    
    for (int i = 0; i < 20; i++) {
        if (vetor[i] == n) {
            contador++;
        }
    }
    
    printf("O número %d aparece %d vezes no vetor.\n", n, contador);
    
    return 0;
}