#include <stdio.h>

int main(void){
    int soma = 0;
    for(int i = 0; i < 101; i++){
        soma += i;
    }
    printf("Soma de 1 ate 100: %d\n", soma);
}