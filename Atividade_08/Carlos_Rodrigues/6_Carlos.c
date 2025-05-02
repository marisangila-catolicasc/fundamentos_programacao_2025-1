#include <stdio.h>

int main() {
    int vetor[20], pares = 0;

    for (int x = 0; x < 20; x++) {
        
        printf("Digite o %d número: ", x + 1);
        scanf("%d", &vetor[x]);
        
        if (vetor[x] % 2 == 0) {
            pares++;
        }
    } 
    printf("\nQuantidade de números pares: \n%d\n", pares);
    return 0;
}
