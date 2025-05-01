#include <stdio.h>

int main(void){
    int vetor[15];

    srand(time(NULL));

    for(int i = 0; i < 15; i++){
        vetor[i] = rand() % 20;
    }

    int soma_imp = 0;

    for(int i = 0; i < 15; i++){
        if(i % 2 != 0){
            soma_imp += vetor[i];
        }
    }

    for (int i = 0; i < 15; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("Soma dos impares: %d", soma_imp);
}