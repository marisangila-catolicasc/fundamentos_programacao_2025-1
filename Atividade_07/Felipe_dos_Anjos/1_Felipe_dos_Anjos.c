#include <stdio.h>

int main() {
    int num1, num2;

    printf("Insira o primeiro valor inteiro: ");
    scanf("%d", &num1);

    printf("Insira o segundo valor inteiro: ");
    scanf("%d", &num2);

    printf("Valores iniciais -> num1: %d, num2: %d\n", num1, num2);

    while (num1 != num2) {
        if (num1 < num2) {
            num1++;
        } else {
            num1--;
        }
        printf("Valor atualizado de num1: %d\n", num1);
    }

    printf("Os dois valores agora são iguais: %d\n", num1);

    return 0;
}