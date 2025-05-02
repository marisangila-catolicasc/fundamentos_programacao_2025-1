#include <stdio.h>

int main() {
int numeros[20], alvo, contador = 0;


    printf("Informe 20 números inteiros:\n");
    for (int i = 0; i < 20; i++) {
        printf("Posição %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    
    printf("\nInforme o número que deseja contar: ");
    scanf("%d", &alvo);

    
    for (int i = 0; i < 20; i++) {
        if (numeros[i] == alvo) {
            contador++;
        }
    }

    
    printf("\nO número %d aparece %d vezes no vetor.\n", alvo, contador);

    return 0;
}
