include <stdio.h>

int main() {
    int vetor[20], numero, i, contador = 0;

    printf("Digite 20 números inteiros:\n");
    for (i = 0; i < 20; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Digite o número que você quer procurar: ");
    scanf("%d", &numero);

    for (i = 0; i < 20; i++) {
        if (vetor[i] == numero) {
            contador++;
        }
    }

    printf("O número %d aparece %d vez(es) no vetor.\n", numero, contador);

    return 0;
}