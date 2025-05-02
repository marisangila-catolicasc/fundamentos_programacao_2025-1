#include <stdio.h>

int main() {
    int vetor[20];
    int numero, contador = 0;

    for (int i = 0; i < 20; i++) 
    {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    printf("\nDigite um numero para procurar no vetor: ");
    scanf("%d", &numero);

    for (int i = 0; i < 20; i++) 
    {
        if (vetor[i] == numero) 
        {
            contador++;
        }
    }

    printf("\nO numero %d aparece %d vezes no vetor.\n", numero, contador);

    return 0;
}
