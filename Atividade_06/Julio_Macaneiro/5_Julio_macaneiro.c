#include <stdio.h>

int main() {
int soma = 0;

    
    for (int i = 1; i <= 100; i++) {
        soma = soma + i;
    }

    printf("A soma dos 100 primeiros números naturais será: %d\n", soma);

    
    return 0;
}
