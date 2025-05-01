#include <stdio.h>
#include <stdlib.h>

int maior(int vetor[], int tamanho);
int menor(int vetor[], int tamanho);

int main(void){
    int ns;

    printf("Numero de elementos: ");
    scanf("%d", &ns);

    int vetor_inteiro[ns];
    int index = 0;

    int numero;

    for(int i = 0; i < ns; i++){
        printf("Numero(%d): ", i + 1);
        scanf("%d", &numero);

        vetor_inteiro[index] = numero;
        index++;
    }

    int ma_todos = maior(vetor_inteiro, ns);
    int me_todos = menor(vetor_inteiro, ns);
    
    system("cls");
    printf("Maior: %d\nMenor: %d", ma_todos, me_todos);
}

int maior(int vetor[], int tamanho){
    int valor, maior;

    for(int i = 0; i < tamanho; i++){
        valor = vetor[i];

        if(i == 0){
            maior = valor;
        }else{
            if(maior < valor){
                maior = valor;
            }
        }
    }

    return maior;
}

int menor(int vetor[], int tamanho){
    int valor, menor;

    for(int i = 0; i < tamanho; i++){
        valor = vetor[i];

        if(i == 0){
            menor = valor;
        }else{
            if(menor > valor){
                menor = valor;
            }
        }
    }
    return menor;
}