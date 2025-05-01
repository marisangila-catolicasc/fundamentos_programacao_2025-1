#include <stdio.h>

int main(void){
    int vetor_de_10[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    int verificadora = 0;
    int posicao = 0;

    for(int i = 0; i < 10; i++){
        if(n == vetor_de_10[i]){
            verificadora++;
            posicao = i;
        }
    }
    if(verificadora == 0){
        printf("Nao encontrado");
    }else{
        printf("%d foi encontrado no indice %d", n, posicao);
    }
}