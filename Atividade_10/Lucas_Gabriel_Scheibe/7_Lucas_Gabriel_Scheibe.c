#include <stdio.h>

int primo(int n);

int main(void) {
    int number;

    printf("Numero: ");
    scanf("%d", &number);

    if (primo(number)) {
        printf("Primo\n");
    } else {
        printf("não e primo\n");
    }

    return 0;
}

int primo(int n) {
    if (n < 2) {
        return 0;
    }

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}
