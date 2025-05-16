#include <stdio.h>

int verifica_par_impar(int numero) {
    return !(numero & 1);
}

int main() {
    int num;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    if (verifica_par_impar(num)) {
        printf("%d é par\n", num);
    } else {
        printf("%d é ímpar\n", num);
    }
    
    return 0;
}