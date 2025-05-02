#include <stdio.h>

//10. Faça um programa que leia um vetor de 20 numeros e peça um numero ao usuario. Conte quantas vezes esse numero aparece no vetor.

int main() {
int vetor[20];
int i;
int numero;
int contador = 0;
    
    printf("Digite 20 numeros:\n");
    for (i = 0; i < 20; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("\nDigite um numero para verificar quantas vezes ele aparece no vetor: ");
    scanf("%d", &numero);

    for (i = 0; i < 20; i++)
        if (vetor[i] == numero)
            contador++;
    
    printf("\nO numero %d aparece %d vezes no vetor.\n", numero, contador);

    printf("\n\n");
    printf("Acabou!");
    
return 0;
}