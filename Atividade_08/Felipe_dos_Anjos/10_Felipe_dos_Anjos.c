#include <stdio.h>

int main() {
    int vetor[20];
    int n, contador = 0;
    
    printf("Informe 20 números:\n");
    for (int i = 0; i < 20; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Informe um número para saber quantas vezes ele aparece:\n");
    scanf("%d", &n);
    
    for (int i = 0; i < 20; i++) {
        if (vetor[i] == n) {
            contador++;
        }
    }
    
    printf("O número %d aparece %d vez(es) no vetor.\n", n, contador);
    
    return 0;
}