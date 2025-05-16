#include <stdio.h>

int verifica_primo(int number) {
    
    for (int i=1; i<= number/2; i++) {
        if (number % i == 0 && i != 1) {
            return 0;
            break;
        }
    }
    
    
    return 1;
}

int main() {
    int number;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &number);
    
    if (verifica_primo(number)) {
        printf("O numero digitado eh um numero primo!");
    } else {
        printf("O numero digitado nao eh um numero primo!");
    }
    
    return 0;
}