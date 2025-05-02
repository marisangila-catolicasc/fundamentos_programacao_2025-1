#include <stdio.h>

int main() {
    int vetor[20];
    int numero, contador = 0;


    printf("Digite 20 numeros inteiros:\n");
    for (int i = 0; i < 20; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nDigite um numero para contar quantas vezes ele aparece no vetor: ");
    scanf("%d", &numero);

    for (int i = 0; i < 20; i++) {
        if (vetor[i] == numero) {
            contador++;
        }
    }

    if (contador > 0) {
        printf("O numero %d aparece %d vez(es) no vetor.\n", numero, contador);
    } else {
        printf("O numero %d nao aparece no vetor.\n", numero);
    }

    return 0;
}
