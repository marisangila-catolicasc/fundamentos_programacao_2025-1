#include <stdio.h>

int main() {
    int vetor[20], pares = 0;
    
    printf("Digite 20 numeros para o vetor:\n");
    
    for (int i = 0; i < 20; i++) {
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 == 0) pares++;
    }

    printf("Quantidade de numeros pares no vetor é: %d\n", pares);
    

return 0;
}