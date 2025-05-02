#include <stdio.h>

int main() {
    int vetor[20], numero, quantidade = 0;

    printf("Digite 20 numeros inteiros:\n");
    for (int i = 0; i < 20; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Digite um numero para buscar no vetor: ");
    scanf("%d", &numero);

    for (int i = 0; i < 20; i++){
        if (vetor[i] == numero){
            quantidade++;
        }
    }

    printf("O numero %d aparece %d vez(es) no vetor\n", numero, quantidade);
}