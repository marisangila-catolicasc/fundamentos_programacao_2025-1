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
    int num;

    printf("Digite algum número inteiro: ");
    scanf("%d", &num);

    if (verifica_primo(num)) {
        printf("O número %d eh primo.\n", num);
    } else {
        printf("O número %d não eh primo.\n", num);
    }

    return 0;
}
