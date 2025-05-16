#include <stdio.h>

int verifica_primo(int n1) {
    
    for (int i=1; i<= n1/2; i++) {
        if (n1 % i == 0 && i != 1) {
            return 0;
            break;
        }
    }
    
    
    return 1;
}

int main() {
    int n1;
    
    printf("Digite um valor inteiro:\n");
    scanf("%d", &n1);
    
    if (verifica_primo(n1)) {
        printf("Primo\n");
    } else {
        printf("Não é primo\n");
    }
    
    return 0;
}