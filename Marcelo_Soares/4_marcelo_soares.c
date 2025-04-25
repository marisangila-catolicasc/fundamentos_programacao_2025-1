#include <stdio.h>

int main() {
    int par = 0, impar = 0;
    int num;

    for (int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num % 2 == 0) {
            par++;
        } else {
            impar++;
        }
    }

    printf("\nTotal de numeros pares eh %d\n", par);
    printf("Total de numeros impares eh %d\n", impar);

    return 0;
}