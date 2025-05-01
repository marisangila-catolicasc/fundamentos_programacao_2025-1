#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int vetor[20];

    srand(time(NULL));

    for(int i = 0; i < 20; i++){
        vetor[i] = rand() % 20;
    }

    int busca, vezes = 0;

    printf("Qual numero quer buscar: ");
    scanf("%d", &busca);

    for(int i = 0; i < 20; i++){
        if(busca == vetor[i]){
            vezes++;
        }
    }
    if(vezes == 0){
        printf("Nao encontrado");
    }else if(vezes > 1){
        printf("Encontrado, %d vezes", vezes);
    }else if(vezes == 1){
        printf("Encontrado, %d vez", vezes);
    }

    char resposta;

    printf("\nQuer ver o vetor?\n");
    printf("s/n: ");
    scanf(" %c", &resposta);

    if(resposta == 's'){
        printf("Vetor gerado: ");
        for (int i = 0; i < 20; i++) {
            printf("%d ", vetor[i]);
        }
        printf("\n");
    }else if(resposta == 'n'){
        printf("Ok...");
    }else{
        printf("Valor invalido");
    }
}