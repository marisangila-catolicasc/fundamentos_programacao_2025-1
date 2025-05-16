#include <stdio.h>

int verifica_par_impar(int n1) {
    if (n1 % 2 == 0) {
        return 1;
    }
    
    return 0;
}

int main() {
    int n1;
    
    printf("Digite um numero:\n");
    scanf("%d", &n1);
    
    if (verifica_par_impar(n1)) {
        printf("Par\n");
    } else {
        printf("Impar\n");
    }
    
    return 0;
}