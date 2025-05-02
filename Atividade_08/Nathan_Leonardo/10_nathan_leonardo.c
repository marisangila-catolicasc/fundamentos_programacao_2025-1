#include <stdio.h>

int main() {
    int vetor[20];
    int i, numero, contador = 0;

    printf("Digite 20 numeros inteiros:\n");
    for (i = 0; i < 20; i++) {
        printf("Elemento %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\nDigite um numero para contar quantas vezes aparece no vetor: ");
    scanf("%d", &numero);

    for (i = 0; i < 20; i++) {
        if (vetor[i] == numero) {
            contador++;
        }
    }

    printf("\nO numero %d aparece %d vez(es) no vetor.\n", numero, contador);

    return 0;
}
