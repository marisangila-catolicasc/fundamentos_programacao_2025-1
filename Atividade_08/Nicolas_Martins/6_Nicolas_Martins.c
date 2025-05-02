#include <stdio.h>

int main() {
    int numbers[20], count = 0;
    int i;

    printf("Por favor, insira 20 números inteiros:\n");
    for (i = 0; i < 20; ++i) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    for (i = 0; i < 20; ++i) {
        if (numbers[i] % 2 == 0) {
            ++count;
        }
    }

    
    printf("\nA quantidade de números pares será: %d\n", count);

    return 0;
}
