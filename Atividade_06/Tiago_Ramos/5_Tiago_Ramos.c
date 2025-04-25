#include <stdio.h>

int main() {

    int soma = 0;

    for(int i = 0; i < 101; i ++){
        soma = i + soma;
        if(i != 100) {
            printf("%d + %d \n", soma, i+1);
        } 
    }

    printf("%d", soma);

    return 0;
}