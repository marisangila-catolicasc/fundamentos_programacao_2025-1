#include <stdio.h>

int main() {
    int num, pares = 0, impares = 0;

    printf("Digite 10 numeros:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &num);

        if (num % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("Dos 10 numeros ", pares," sao numeros pares e %d\n", impares, "sao numeros impares: %d\n");

    return 0;
}
