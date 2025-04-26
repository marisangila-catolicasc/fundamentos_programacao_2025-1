#include <stdio.h>

int main() {
    int vetor[20];
    int numero;
    int contagem = 0;

    printf("Digite 20 numeros:\n");
    for (int i = 0; i < 20; i++){
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Digite um numero para verificar quantas vezes ele aparece no vetor: ");
    scanf("%d", &numero);

    for (int i = 0; i < 20; i++){
        if(vetor[i] == numero){
            contagem++;
        }
    }
    printf("O numero %d aparece %d vezes no vetor.\n", numero, contagem);
    
    return 0;
}