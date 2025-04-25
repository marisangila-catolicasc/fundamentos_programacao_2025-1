#include <stdio.h>

int main(void){

    int soma = 0;

    for (int s = 0; s <= 100; s++){
        soma += s;
    }

    printf("Resultado: %d \n", soma);

    return 0;
}