#include <stdio.h>

int main() {
    int num, maior;

    printf("Numero 1: ");
    scanf("%d", &maior);

    for(int i = 1; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &num);

        if(num > maior) {
            maior = num;
        }
    }

    printf("Maior numero: %d\n", maior);
    return 0;
}
