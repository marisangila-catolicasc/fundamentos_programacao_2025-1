#include <stdio.h>

int maior(int Nsss);

int main(void){
    int ns;

    printf("Quantos numeros: ");
    scanf("%d", &ns);

    int maior_todos = maior(ns);

    printf("O maior dos %d eh %d", ns, maior_todos);
}

int maior(int Nsss){
    int valor, maior;

    for(int i = 0; i < Nsss; i++){
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &valor);

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