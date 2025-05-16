#include <stdio.h>

int par_impar(int n);

int main() {
    int number;

    printf("Numero: ");
    scanf("%d", &number);

    if (par_impar(number)) {
        printf("Par\n");
    } else {
        printf("Impar\n");
    }

    return 0;
}

int par_impar(int n) {
    return (n % 2 == 0) ? 1 : 0;
}
