#include <stdio.h>

int verifica_primo(int numero) {
    if (numero <= 1) {
        return 0;
    }
    
    if (numero <= 3) {
        return 1;
    }
    
    if (numero % 2 == 0 || numero % 3 == 0) {
        return 0;
    }
    
    for (int i = 5; i * i <= numero; i += 6) {
        if (numero % i == 0 || numero % (i + 2) == 0) {
            return 0;
        }
    }
    
    return 1;
}

int main() {
    int num;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    if (verifica_primo(num)) {
        printf("%d é primo\n", num);
    } else {
        printf("%d não é primo\n", num);
    }
    
    return 0;
}