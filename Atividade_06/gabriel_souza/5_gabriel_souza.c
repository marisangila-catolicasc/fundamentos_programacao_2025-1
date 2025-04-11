#include <stdio.h>

/*
Fa ̧ca um programa que apresente a soma dos cem
primeiros n ́umeros naturais (1 + 2 + 3 + ... + 98 + 99 + 100)
*/
int main(){
    
    int soma = 0;

    for (int i = 1; i <= 100; i++){
        soma += i;
    }
    printf("soma: %d\n", soma);
    return 0;
}
