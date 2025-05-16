#include <stdio.h>

int verifica_primo(int numero) {
    if (numero <= 1) {
        return 0; 
    }

    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return 0; 
        }
    }

    return 1; 
}

int main() {
    int num1 = 7;
    int num2 = 10;

    printf("%d é primo? %s\n", num1, verifica_primo(num1) ? "Sim" : "Não");
    printf("%d é primo? %s\n", num2, verifica_primo(num2) ? "Sim" : "Não");

    return 0;
}
