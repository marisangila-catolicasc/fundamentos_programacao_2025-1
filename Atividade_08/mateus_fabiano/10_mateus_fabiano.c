#include <stdio.h>

#define TAMANHO_VETOR 20

int main() {
    int vetor[TAMANHO_VETOR];
    int n, contador = 0;
    
    printf("Digite %d numeros:\n", TAMANHO_VETOR);
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        if (scanf("%d", &vetor[i]) != 1) {
            printf("Entrada inválida! Por favor, insira um número inteiro.\n");
            return 1;
        }
    }

    printf("Digite um número pra saber quantas vezes ele aparece:\n");
    if (scanf("%d", &n) != 1) {
        printf("Entrada inválida! Por favor, insira um número inteiro.\n");
        return 1;
    }
    
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        if (vetor[i] == n) {
            contador++;
        }
    }
    
    printf("O número %d aparece %d vezes no vetor.\n", n, contador);
    
    return 0;
}