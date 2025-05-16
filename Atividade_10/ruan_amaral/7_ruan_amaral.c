#include <stdio.h>

int verifica_primo(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);
    printf("É primo? %d\n", verifica_primo(n));
    return 0;
}
