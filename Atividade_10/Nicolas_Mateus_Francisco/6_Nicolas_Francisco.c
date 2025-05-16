#include <stdio.h>

int verifica_par_impar(int number) {
    if (number % 2 == 0) {
        return 1;
    }
    
    return 0;
}

int main() {
    int number;
    
    printf("Digite um numero: ");
    scanf("%d", &number);
    
    if (verifica_par_impar(number)) {
        printf("O numero digitado eh par!");
    } else {
        printf("O numero digitado eh impar!");
    }
    
    return 0;
}