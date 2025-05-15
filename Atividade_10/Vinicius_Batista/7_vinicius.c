#include <stdio.h>

int verifica_primo(int numero) {

    for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int num;
    printf("Digite um numero:\n");
    scanf("%d", &num);
    verifica_primo(num);
    printf("1 siginifica q eh primo, 0 significa que nao eh primo\n");
    printf("%d", verifica_primo(num));
    
    return 0;
}
